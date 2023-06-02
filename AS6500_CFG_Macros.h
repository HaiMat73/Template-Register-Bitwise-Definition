/*
 * AS6500_CFG_Macros.h
 *
 *  Created on: 20.05.2022
 *      Author: ScioSense Support Team
 */

#ifndef INC_AS6500_CFG_MACROS_H_
#define INC_AS6500_CFG_MACROS_H_

/* Exported macros -----------------------------------------------------------*/
/** @defgroup _Exported_Macros  Exported Macros"
  * @{
  */

/** @defgroup AS6500_CFG0 register
* @{
*/
#define AS6500_CFG0_PIN_ENA_STOP1_SET(__Val__)           	(((__Val__) << AS6500_CFG0_PIN_ENA_STOP1_Pos) & AS6500_CFG0_PIN_ENA_STOP1_Msk)		/*!< Default = 0x1 */
#define AS6500_CFG0_PIN_ENA_STOP2_SET(__Val__)           	(((__Val__) << AS6500_CFG0_PIN_ENA_STOP2_Pos) & AS6500_CFG0_PIN_ENA_STOP2_Msk)		/*!< Default = 0x0 */
#define AS6500_CFG0_PIN_ENA_STOP3_SET(__Val__)           	(((__Val__) << AS6500_CFG0_PIN_ENA_STOP3_Pos) & AS6500_CFG0_PIN_ENA_STOP3_Msk)		/*!< Default = 0x0 */
#define AS6500_CFG0_PIN_ENA_STOP4_SET(__Val__)           	(((__Val__) << AS6500_CFG0_PIN_ENA_STOP4_Pos) & AS6500_CFG0_PIN_ENA_STOP4_Msk)		/*!< Default = 0x0 */
#define AS6500_CFG0_PIN_ENA_REFCLK_SET(__Val__)          	(((__Val__) << AS6500_CFG0_PIN_ENA_REFCLK_Pos) & AS6500_CFG0_PIN_ENA_REFCLK_Msk)		/*!< Default = 0x1 */
#define AS6500_CFG0_Fixed_Value_SET(__Val__)             	(((__Val__) << AS6500_CFG0_Fixed_Value_Pos) & AS6500_CFG0_Fixed_Value_Msk)		/*!< Default = 0x0 */
#define AS6500_CFG0_PIN_ENA_DISABLE_SET(__Val__)         	(((__Val__) << AS6500_CFG0_PIN_ENA_DISABLE_Pos) & AS6500_CFG0_PIN_ENA_DISABLE_Msk)		/*!< Default = 0x0 */
#define AS6500_CFG0_PIN_ENA_RSTIDX_SET(__Val__)          	(((__Val__) << AS6500_CFG0_PIN_ENA_RSTIDX_Pos) & AS6500_CFG0_PIN_ENA_RSTIDX_Msk)		/*!< Default = 0x0 */
/**
* @}
*/

/** @defgroup AS6500_CFG1 register
* @{
*/
#define AS6500_CFG1_HIT_ENA_STOP1_SET(__Val__)           	(((__Val__) << AS6500_CFG1_HIT_ENA_STOP1_Pos) & AS6500_CFG1_HIT_ENA_STOP1_Msk)		/*!< Default = 0x1 */
#define AS6500_CFG1_HIT_ENA_STOP2_SET(__Val__)           	(((__Val__) << AS6500_CFG1_HIT_ENA_STOP2_Pos) & AS6500_CFG1_HIT_ENA_STOP2_Msk)		/*!< Default = 0x0 */
#define AS6500_CFG1_HIT_ENA_STOP3_SET(__Val__)           	(((__Val__) << AS6500_CFG1_HIT_ENA_STOP3_Pos) & AS6500_CFG1_HIT_ENA_STOP3_Msk)		/*!< Default = 0x0 */
#define AS6500_CFG1_HIT_ENA_STOP4_SET(__Val__)           	(((__Val__) << AS6500_CFG1_HIT_ENA_STOP4_Pos) & AS6500_CFG1_HIT_ENA_STOP4_Msk)		/*!< Default = 0x0 */
#define AS6500_CFG1_CHANNEL_COMBINE_SET(__Val__)         	(((__Val__) << AS6500_CFG1_CHANNEL_COMBINE_Pos) & AS6500_CFG1_CHANNEL_COMBINE_Msk)		/*!< Default = 0x0 */
#define AS6500_CFG1_HIGH_RESOLUTION_SET(__Val__)         	(((__Val__) << AS6500_CFG1_HIGH_RESOLUTION_Pos) & AS6500_CFG1_HIGH_RESOLUTION_Msk)		/*!< Default = 0x0 */
/**
* @}
*/

/** @defgroup AS6500_CFG2 register
* @{
*/
#define AS6500_CFG2_Fixed_Value_SET(__Val__)             	(((__Val__) << AS6500_CFG2_Fixed_Value_Pos) & AS6500_CFG2_Fixed_Value_Msk)		/*!< Default = 0x0 */
#define AS6500_CFG2_COMMON_FIFO_READ_SET(__Val__)        	(((__Val__) << AS6500_CFG2_COMMON_FIFO_READ_Pos) & AS6500_CFG2_COMMON_FIFO_READ_Msk)		/*!< Default = 0x0 */
#define AS6500_CFG2_BLOCKWISE_FIFO_READ_SET(__Val__)     	(((__Val__) << AS6500_CFG2_BLOCKWISE_FIFO_READ_Pos) & AS6500_CFG2_BLOCKWISE_FIFO_READ_Msk)		/*!< Default = 0x0 */
/**
* @}
*/

/** @defgroup AS6500_CFG3 register
* @{
*/
#define AS6500_CFG3_REFCLK_DIVISIONS_0_SET(__Val__)      	(((__Val__) << AS6500_CFG3_REFCLK_DIVISIONS_0_Pos) & AS6500_CFG3_REFCLK_DIVISIONS_0_Msk)		/*!< Default = 0x40 */
/**
* @}
*/

/** @defgroup AS6500_CFG4 register
* @{
*/
#define AS6500_CFG4_REFCLK_DIVISIONS_1_SET(__Val__)      	(((__Val__) << AS6500_CFG4_REFCLK_DIVISIONS_1_Pos) & AS6500_CFG4_REFCLK_DIVISIONS_1_Msk)		/*!< Default = 0xD */
/**
* @}
*/

/** @defgroup AS6500_CFG5 register
* @{
*/
#define AS6500_CFG5_REFCLK_DIVISIONS_2_SET(__Val__)      	(((__Val__) << AS6500_CFG5_REFCLK_DIVISIONS_2_Pos) & AS6500_CFG5_REFCLK_DIVISIONS_2_Msk)		/*!< Default = 0x3 */
#define AS6500_CFG5_Fixed_Value_SET(__Val__)             	(((__Val__) << AS6500_CFG5_Fixed_Value_Pos) & AS6500_CFG5_Fixed_Value_Msk)		/*!< Default = 0x0 */
/**
* @}
*/

/** @defgroup AS6500_CFG6 register
* @{
*/
#define AS6500_CFG6_Fixed_Value_SET(__Val__)             	(((__Val__) << AS6500_CFG6_Fixed_Value_Pos) & AS6500_CFG6_Fixed_Value_Msk)		/*!< Default = 0x0 */
/**
* @}
*/

/** @defgroup AS6500_CFG7 register
* @{
*/
#define AS6500_CFG7_Fixed_Value_SET(__Val__)             	(((__Val__) << AS6500_CFG7_Fixed_Value_Pos) & AS6500_CFG7_Fixed_Value_Msk)		/*!< Default = 0x43 */
#define AS6500_CFG7_REFCLK_BY_XOSC_SET(__Val__)          	(((__Val__) << AS6500_CFG7_REFCLK_BY_XOSC_Pos) & AS6500_CFG7_REFCLK_BY_XOSC_Msk)		/*!< Default = 0x0 */
/**
* @}
*/

/** @defgroup AS6500_CFG8 register
* @{
*/
#define AS6500_CFG8_Fixed_Value_SET(__Val__)             	(((__Val__) << AS6500_CFG8_Fixed_Value_Pos) & AS6500_CFG8_Fixed_Value_Msk)		/*!< Default = 0xA1 */
/**
* @}
*/

/** @defgroup AS6500_CFG9 register
* @{
*/
#define AS6500_CFG9_Fixed_Value_SET(__Val__)             	(((__Val__) << AS6500_CFG9_Fixed_Value_Pos) & AS6500_CFG9_Fixed_Value_Msk)		/*!< Default = 0x13 */
/**
* @}
*/

/** @defgroup AS6500_CFG10 register
* @{
*/
#define AS6500_CFG10_Fixed_Value_SET(__Val__)            	(((__Val__) << AS6500_CFG10_Fixed_Value_Pos) & AS6500_CFG10_Fixed_Value_Msk)		/*!< Default = 0x00 */
/**
* @}
*/

/** @defgroup AS6500_CFG11 register
* @{
*/
#define AS6500_CFG11_Fixed_Value_SET(__Val__)            	(((__Val__) << AS6500_CFG11_Fixed_Value_Pos) & AS6500_CFG11_Fixed_Value_Msk)		/*!< Default = 0x0A */
/**
* @}
*/

/** @defgroup AS6500_CFG12 register
* @{
*/
#define AS6500_CFG12_Fixed_Value_SET(__Val__)            	(((__Val__) << AS6500_CFG12_Fixed_Value_Pos) & AS6500_CFG12_Fixed_Value_Msk)		/*!< Default = 0xCC */
/**
* @}
*/

/** @defgroup AS6500_CFG13 register
* @{
*/
#define AS6500_CFG13_Fixed_Value_SET(__Val__)            	(((__Val__) << AS6500_CFG13_Fixed_Value_Pos) & AS6500_CFG13_Fixed_Value_Msk)		/*!< Default = 0xCC */
/**
* @}
*/

/** @defgroup AS6500_CFG14 register
* @{
*/
#define AS6500_CFG14_Fixed_Value_SET(__Val__)            	(((__Val__) << AS6500_CFG14_Fixed_Value_Pos) & AS6500_CFG14_Fixed_Value_Msk)		/*!< Default = 0xF1 */
/**
* @}
*/

/** @defgroup AS6500_CFG15 register
* @{
*/
#define AS6500_CFG15_Fixed_Value_SET(__Val__)            	(((__Val__) << AS6500_CFG15_Fixed_Value_Pos) & AS6500_CFG15_Fixed_Value_Msk)		/*!< Default = 0x7D */
/**
* @}
*/

/** @defgroup AS6500_CFG16 register
* @{
*/
#define AS6500_CFG16_Fixed_Value_SET(__Val__)            	(((__Val__) << AS6500_CFG16_Fixed_Value_Pos) & AS6500_CFG16_Fixed_Value_Msk)		/*!< Default = 0x4 */
/**
* @}
*/

/**
* @}
*/


#endif /* INC_AS6500_CFG_MACROS_H_ */
