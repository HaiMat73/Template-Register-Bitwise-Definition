/*
 * AS6500_Coding.h
 *
 *  Created on: 24.05.2022
 *      Author: ScioSense Support Team
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef INC_AS6500_CODING_H_
#define INC_AS6500_CODING_H_

/* Includes ------------------------------------------------------------------*/
#include "AS6500_Bit_Definition.h"
#include "AS6500_CFG_Macros.h"

/* Exported types ------------------------------------------------------------*/
/** @defgroup AS6500_Exported_Types AS6500 Exported Types
  * @{
  */

/* Private defines -----------------------------------------------------------*/
/** @defgroup AS6500_Private_Constants AS6500 Private Constants
  * @{
  */
#define __AS6500_CFG_Declaration	uint8_t
#define __AS6500_CFG_Array_Size		17		/* Addresses from CR[0] up to CR[16] */
/**
* @}
*/
/**
  * @brief  AS6500 Opcode definition
  */
typedef enum _AS6500_OpcodeTypeDef
{
	/* Opcode = Hex / Description */
	spiopc_power        = 0x30U,    /*!< 0b00110000 Power on reset and stop measurement                */
	spiopc_init         = 0x18U,    /*!< 0b00011000 Initializes Chip and starts measurement            */
	spiopc_write_config = 0x80U,    /*!< 0b100XXXXX 0x60 = 0b011XXXXX                                  */
	spiopc_read_results = 0x60U,    /*!< 0b011XXXXX Read opcode for result and status register X=8..31 */
	spiopc_read_config  = 0x40U     /*!< 0b010XXXXX Readout of configuration register X=0..16          */
} AS6500_OpcodeTypeDef;

/**
  * @brief  AS6500 State structure definition
  */
typedef enum _AS6500_StateTypeDef
{
	AS6500_STATE_RESET      = 0x00U,    /*!< Device not Initialized                           */
	AS6500_STATE_READY      = 0x01U,    /*!< Device Configured, Initialized and ready for use */
	AS6500_STATE_BUSY       = 0x02U,    /*!< an internal process is ongoing                   */
	AS6500_STATE_INTN       = 0x03U,    /*!< Device interrupt state                           */
	AS6500_STATE_ERROR      = 0x04U     /*!< Device error state                               */
} AS6500_StateTypeDef;

/* Exported types ------------------------------------------------------------*/
/** @defgroup AS6500_Exported_Types AS6500 Exported Types
  * @{
  */
/**
  * @brief  Configuration CR[0] Structure definition
  */
typedef struct {
	uint8_t PIN_ENA_STOP1;      	/*!< Activation of STOP1 pin */
	uint8_t PIN_ENA_STOP2;      	/*!< Activation of STOP2 pin */
	uint8_t PIN_ENA_STOP3;      	/*!< Activation of STOP3 pin */
	uint8_t PIN_ENA_STOP4;      	/*!< Activation of STOP4 pin */
	uint8_t PIN_ENA_REFCLK;     	/*!< Activation of REFCLK */
	uint8_t Fixed_Value;        	/*!< (0b) */
	uint8_t PIN_ENA_DISABLE;    	/*!< Deactivation of all STOP pins */
	uint8_t PIN_ENA_RSTIDX;     	/*!< Deactivation of RSTIDX pin */
} AS6500_CR0TypeDef;

/**
  * @brief  Configuration CR[1] Structure definition
  */
typedef struct {
	uint8_t HIT_ENA_STOP1;      	/*!< Internal acceptance of STOP1 */
	uint8_t HIT_ENA_STOP2;      	/*!< Internal acceptance of STOP2 */
	uint8_t HIT_ENA_STOP3;      	/*!< Internal acceptance of STOP3 */
	uint8_t HIT_ENA_STOP4;      	/*!< Internal acceptance of STOP4 */
	uint8_t CHANNEL_COMBINE;    	/*!< Combination of two STOP channels */
	uint8_t HIGH_RESOLUTION;    	/*!< Internal multiple measurement */
} AS6500_CR1TypeDef;

/**
  * @brief  Configuration CR[2] Structure definition
  */
typedef struct {
	uint8_t Fixed_Value;        	/*!< (000000b) */
	uint8_t COMMON_FIFO_READ;   	/*!< INTN -> all active FIFOs have value */
	uint8_t BLOCKWISE_FIFO_READ;	/*!< INTN -> once FIFO is full */
} AS6500_CR2TypeDef;

/**
  * @brief  Configuration CR[3] Structure definition
  */
typedef struct {
	uint8_t REFCLK_DIVISIONS_0; 	/*!< REFCLK_DIVISONS lower 8 bits */
} AS6500_CR3TypeDef;

/**
  * @brief  Configuration CR[4] Structure definition
  */
typedef struct {
	uint8_t REFCLK_DIVISIONS_1; 	/*!< REFCLK_DIVISONS middle 8 bits */
} AS6500_CR4TypeDef;

/**
  * @brief  Configuration CR[5] Structure definition
  */
typedef struct {
	uint8_t REFCLK_DIVISIONS_2; 	/*!< REFCLK_DIVISONS higher 4 bits */
	uint8_t Fixed_Value;        	/*!< (0000b) */
} AS6500_CR5TypeDef;

/**
  * @brief  Configuration CR[6] Structure definition
  */
typedef struct {
	uint8_t Fixed_Value;        	/*!< (11000000b) */
} AS6500_CR6TypeDef;

/**
  * @brief  Configuration CR[7] Structure definition
  */
typedef struct {
	uint8_t Fixed_Value;        	/*!< (1000011b) */
	uint8_t REFCLK_BY_XOSC;     	/*!<  */
} AS6500_CR7TypeDef;

/**
  * @brief  Configuration CR[8] Structure definition
  */
typedef struct {
	uint8_t Fixed_Value;        	/*!< (10100001b) */
} AS6500_CR8TypeDef;

/**
  * @brief  Configuration CR[9] Structure definition
  */
typedef struct {
	uint8_t Fixed_Value;        	/*!< (00010011b) */
} AS6500_CR9TypeDef;

/**
  * @brief  Configuration CR[10] Structure definition
  */
typedef struct {
	uint8_t Fixed_Value;        	/*!< (00000000b) */
} AS6500_CR10TypeDef;

/**
  * @brief  Configuration CR[11] Structure definition
  */
typedef struct {
	uint8_t Fixed_Value;        	/*!< (00001010b) */
} AS6500_CR11TypeDef;

/**
  * @brief  Configuration CR[12] Structure definition
  */
typedef struct {
	uint8_t Fixed_Value;        	/*!< (11001100b) */
} AS6500_CR12TypeDef;

/**
  * @brief  Configuration CR[13] Structure definition
  */
typedef struct {
	uint8_t Fixed_Value;        	/*!< (11001100b) */
} AS6500_CR13TypeDef;

/**
  * @brief  Configuration CR[14] Structure definition
  */
typedef struct {
	uint8_t Fixed_Value;        	/*!< (11110001b) */
} AS6500_CR14TypeDef;

/**
  * @brief  Configuration CR[15] Structure definition
  */
typedef struct {
	uint8_t Fixed_Value;        	/*!< (01111101b) */
} AS6500_CR15TypeDef;

/**
  * @brief  Configuration CR[16] Structure definition
  */
typedef struct {
	uint8_t Fixed_Value;        	/*!< (00000100b) */
} AS6500_CR16TypeDef;


/**
  * @brief  Configuration Structure definition
  */
typedef struct {
	AS6500_CR0TypeDef CR0;
	AS6500_CR1TypeDef CR1;
	AS6500_CR2TypeDef CR2;
	AS6500_CR3TypeDef CR3;
	AS6500_CR4TypeDef CR4;
	AS6500_CR5TypeDef CR5;
	AS6500_CR6TypeDef CR6;
	AS6500_CR7TypeDef CR7;
	AS6500_CR8TypeDef CR8;
	AS6500_CR9TypeDef CR9;
	AS6500_CR10TypeDef CR10;
	AS6500_CR11TypeDef CR11;
	AS6500_CR12TypeDef CR12;
	AS6500_CR13TypeDef CR13;
	AS6500_CR14TypeDef CR14;
	AS6500_CR15TypeDef CR15;
	AS6500_CR16TypeDef CR16;

	/* additional parameter, more than one register long
	 * custom content */

	//uint32_t refclk_division;
} AS6500_ParamTypeDef;
/**
* @}
*/

/**
  * @brief  Initialization Structure definition
  */
typedef struct {
	__AS6500_CFG_Declaration CR[__AS6500_CFG_Array_Size]

	AS6500_ParamTypeDef Param;

	/* place for custom content */
	 * e.g. further registers */

	AS6500_StateTypeDef State;

} AS6500_InitTypeDef;
/**
* @}
*/

/* Private function prototypes -----------------------------------------------*/
/** @defgroup AS6500_Private_Functions AS6500 Private Functions
  * @{
  */
/**
  * @brief  Handle parameter update.
  * @param  init pointer to a AS6500_InitTypeDef structure that contains
  *               the configuration information for the specified device.
  * @retval None
  */
void AS6500_Update_Param(AS6500_InitTypeDef* init)  {
	/* Read all content from CR[] and write into every parameter
	 * Update for each configuration register */
	/* Parameter of CR[0] */
	init->Param.CR0.PIN_ENA_STOP1 = ( (init->CR[0]) &= AS6500_CFG0_PIN_ENA_STOP1_Msk ) >> AS6500_CFG0_PIN_ENA_STOP1_Pos;
	init->Param.CR0.PIN_ENA_STOP2 = ( (init->CR[0]) &= AS6500_CFG0_PIN_ENA_STOP2_Msk ) >> AS6500_CFG0_PIN_ENA_STOP2_Pos;
	init->Param.CR0.PIN_ENA_STOP3 = ( (init->CR[0]) &= AS6500_CFG0_PIN_ENA_STOP3_Msk ) >> AS6500_CFG0_PIN_ENA_STOP3_Pos;
	init->Param.CR0.PIN_ENA_STOP4 = ( (init->CR[0]) &= AS6500_CFG0_PIN_ENA_STOP4_Msk ) >> AS6500_CFG0_PIN_ENA_STOP4_Pos;
	init->Param.CR0.PIN_ENA_REFCLK = ( (init->CR[0]) &= AS6500_CFG0_PIN_ENA_REFCLK_Msk ) >> AS6500_CFG0_PIN_ENA_REFCLK_Pos;
	init->Param.CR0.Fixed_Value = ( (init->CR[0]) &= AS6500_CFG0_Fixed_Value_Msk ) >> AS6500_CFG0_Fixed_Value_Pos;
	init->Param.CR0.PIN_ENA_DISABLE = ( (init->CR[0]) &= AS6500_CFG0_PIN_ENA_DISABLE_Msk ) >> AS6500_CFG0_PIN_ENA_DISABLE_Pos;
	init->Param.CR0.PIN_ENA_RSTIDX = ( (init->CR[0]) &= AS6500_CFG0_PIN_ENA_RSTIDX_Msk ) >> AS6500_CFG0_PIN_ENA_RSTIDX_Pos;
	/* Parameter of CR[1] */
	init->Param.CR1.HIT_ENA_STOP1 = ( (init->CR[1]) &= AS6500_CFG1_HIT_ENA_STOP1_Msk ) >> AS6500_CFG1_HIT_ENA_STOP1_Pos;
	init->Param.CR1.HIT_ENA_STOP2 = ( (init->CR[1]) &= AS6500_CFG1_HIT_ENA_STOP2_Msk ) >> AS6500_CFG1_HIT_ENA_STOP2_Pos;
	init->Param.CR1.HIT_ENA_STOP3 = ( (init->CR[1]) &= AS6500_CFG1_HIT_ENA_STOP3_Msk ) >> AS6500_CFG1_HIT_ENA_STOP3_Pos;
	init->Param.CR1.HIT_ENA_STOP4 = ( (init->CR[1]) &= AS6500_CFG1_HIT_ENA_STOP4_Msk ) >> AS6500_CFG1_HIT_ENA_STOP4_Pos;
	init->Param.CR1.CHANNEL_COMBINE = ( (init->CR[1]) &= AS6500_CFG1_CHANNEL_COMBINE_Msk ) >> AS6500_CFG1_CHANNEL_COMBINE_Pos;
	init->Param.CR1.HIGH_RESOLUTION = ( (init->CR[1]) &= AS6500_CFG1_HIGH_RESOLUTION_Msk ) >> AS6500_CFG1_HIGH_RESOLUTION_Pos;
	/* Parameter of CR[2] */
	init->Param.CR2.Fixed_Value = ( (init->CR[2]) &= AS6500_CFG2_Fixed_Value_Msk ) >> AS6500_CFG2_Fixed_Value_Pos;
	init->Param.CR2.COMMON_FIFO_READ = ( (init->CR[2]) &= AS6500_CFG2_COMMON_FIFO_READ_Msk ) >> AS6500_CFG2_COMMON_FIFO_READ_Pos;
	init->Param.CR2.BLOCKWISE_FIFO_READ = ( (init->CR[2]) &= AS6500_CFG2_BLOCKWISE_FIFO_READ_Msk ) >> AS6500_CFG2_BLOCKWISE_FIFO_READ_Pos;
	/* Parameter of CR[3] */
	init->Param.CR3.REFCLK_DIVISIONS_0 = ( (init->CR[3]) &= AS6500_CFG3_REFCLK_DIVISIONS_0_Msk ) >> AS6500_CFG3_REFCLK_DIVISIONS_0_Pos;
	/* Parameter of CR[4] */
	init->Param.CR4.REFCLK_DIVISIONS_1 = ( (init->CR[4]) &= AS6500_CFG4_REFCLK_DIVISIONS_1_Msk ) >> AS6500_CFG4_REFCLK_DIVISIONS_1_Pos;
	/* Parameter of CR[5] */
	init->Param.CR5.REFCLK_DIVISIONS_2 = ( (init->CR[5]) &= AS6500_CFG5_REFCLK_DIVISIONS_2_Msk ) >> AS6500_CFG5_REFCLK_DIVISIONS_2_Pos;
	init->Param.CR5.Fixed_Value = ( (init->CR[5]) &= AS6500_CFG5_Fixed_Value_Msk ) >> AS6500_CFG5_Fixed_Value_Pos;
	/* Parameter of CR[6] */
	init->Param.CR6.Fixed_Value = ( (init->CR[6]) &= AS6500_CFG6_Fixed_Value_Msk ) >> AS6500_CFG6_Fixed_Value_Pos;
	/* Parameter of CR[7] */
	init->Param.CR7.Fixed_Value = ( (init->CR[7]) &= AS6500_CFG7_Fixed_Value_Msk ) >> AS6500_CFG7_Fixed_Value_Pos;
	init->Param.CR7.REFCLK_BY_XOSC = ( (init->CR[7]) &= AS6500_CFG7_REFCLK_BY_XOSC_Msk ) >> AS6500_CFG7_REFCLK_BY_XOSC_Pos;
	/* Parameter of CR[8] */
	init->Param.CR8.Fixed_Value = ( (init->CR[8]) &= AS6500_CFG8_Fixed_Value_Msk ) >> AS6500_CFG8_Fixed_Value_Pos;
	/* Parameter of CR[9] */
	init->Param.CR9.Fixed_Value = ( (init->CR[9]) &= AS6500_CFG9_Fixed_Value_Msk ) >> AS6500_CFG9_Fixed_Value_Pos;
	/* Parameter of CR[10] */
	init->Param.CR10.Fixed_Value = ( (init->CR[10]) &= AS6500_CFG10_Fixed_Value_Msk ) >> AS6500_CFG10_Fixed_Value_Pos;
	/* Parameter of CR[11] */
	init->Param.CR11.Fixed_Value = ( (init->CR[11]) &= AS6500_CFG11_Fixed_Value_Msk ) >> AS6500_CFG11_Fixed_Value_Pos;
	/* Parameter of CR[12] */
	init->Param.CR12.Fixed_Value = ( (init->CR[12]) &= AS6500_CFG12_Fixed_Value_Msk ) >> AS6500_CFG12_Fixed_Value_Pos;
	/* Parameter of CR[13] */
	init->Param.CR13.Fixed_Value = ( (init->CR[13]) &= AS6500_CFG13_Fixed_Value_Msk ) >> AS6500_CFG13_Fixed_Value_Pos;
	/* Parameter of CR[14] */
	init->Param.CR14.Fixed_Value = ( (init->CR[14]) &= AS6500_CFG14_Fixed_Value_Msk ) >> AS6500_CFG14_Fixed_Value_Pos;
	/* Parameter of CR[15] */
	init->Param.CR15.Fixed_Value = ( (init->CR[15]) &= AS6500_CFG15_Fixed_Value_Msk ) >> AS6500_CFG15_Fixed_Value_Pos;
	/* Parameter of CR[16] */
	init->Param.CR16.Fixed_Value = ( (init->CR[16]) &= AS6500_CFG16_Fixed_Value_Msk ) >> AS6500_CFG16_Fixed_Value_Pos;
}
/**
* @}
*/

/**
  * @brief  Handle initialization of configuration.
  * @param  init pointer to a AS6500_InitTypeDef structure that contains
  *               the configuration information for the specified device.
  * @param2 array pointer to declareted configuration register for the specified device.
  * @retval None
  */
void AS6500_Init_CFG(AS6500_InitTypeDef* init, __AS6500_CFG_Declaration* array)  {
	uint8_t idx;
	/* Update content of CR for external usage */
	for (idx = 0; idx <= __CFG_Array_Size; idx++) {
		init->CR[idx] = array[idx];
	}

	/* Update Parameter */
	AS6500_Update_Param(init);

}
/**
* @}
*/

/**
* @}
*/


#endif /* INC_AS6500_CODING_H_ */
