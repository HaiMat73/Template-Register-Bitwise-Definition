/*
 * AS6500_Bit_Definition.h
 *
 *  Created on: 20.05.2022
 *      Author: ScioSense Support Team
 */

#ifndef INC_AS6500_BIT_DEFINITION_H_
#define INC_AS6500_BIT_DEFINITION_H_

/******************************************************************************/
/*                                                                            */
/*                        TDC AS6500                   */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for AS6500_CFG0 register  ********************/
#define AS6500_CFG0_PIN_ENA_STOP1_Pos           	(0U)
#define AS6500_CFG0_PIN_ENA_STOP1_Msk           	(0x1UL << AS6500_CFG0_PIN_ENA_STOP1_Pos)		/*!< 0x01 */
#define AS6500_CFG0_PIN_ENA_STOP1           		AS6500_CFG0_PIN_ENA_STOP1_Msk					/*!< Activation of STOP1 pin */
#define AS6500_CFG0_PIN_ENA_STOP2_Pos           	(1U)
#define AS6500_CFG0_PIN_ENA_STOP2_Msk           	(0x1UL << AS6500_CFG0_PIN_ENA_STOP2_Pos)		/*!< 0x02 */
#define AS6500_CFG0_PIN_ENA_STOP2           		AS6500_CFG0_PIN_ENA_STOP2_Msk					/*!< Activation of STOP2 pin */
#define AS6500_CFG0_PIN_ENA_STOP3_Pos           	(2U)
#define AS6500_CFG0_PIN_ENA_STOP3_Msk           	(0x1UL << AS6500_CFG0_PIN_ENA_STOP3_Pos)		/*!< 0x04 */
#define AS6500_CFG0_PIN_ENA_STOP3           		AS6500_CFG0_PIN_ENA_STOP3_Msk					/*!< Activation of STOP3 pin */
#define AS6500_CFG0_PIN_ENA_STOP4_Pos           	(3U)
#define AS6500_CFG0_PIN_ENA_STOP4_Msk           	(0x1UL << AS6500_CFG0_PIN_ENA_STOP4_Pos)		/*!< 0x08 */
#define AS6500_CFG0_PIN_ENA_STOP4           		AS6500_CFG0_PIN_ENA_STOP4_Msk					/*!< Activation of STOP4 pin */
#define AS6500_CFG0_PIN_ENA_REFCLK_Pos          	(4U)
#define AS6500_CFG0_PIN_ENA_REFCLK_Msk          	(0x1UL << AS6500_CFG0_PIN_ENA_REFCLK_Pos)		/*!< 0x10 */
#define AS6500_CFG0_PIN_ENA_REFCLK          		AS6500_CFG0_PIN_ENA_REFCLK_Msk					/*!< Activation of REFCLK */
#define AS6500_CFG0_Fixed_Value_Pos             	(5U)
#define AS6500_CFG0_Fixed_Value_Msk             	(0x1UL << AS6500_CFG0_Fixed_Value_Pos)		/*!< 0x20 */
#define AS6500_CFG0_Fixed_Value             		AS6500_CFG0_Fixed_Value_Msk					/*!< (0b) */
#define AS6500_CFG0_PIN_ENA_DISABLE_Pos         	(6U)
#define AS6500_CFG0_PIN_ENA_DISABLE_Msk         	(0x1UL << AS6500_CFG0_PIN_ENA_DISABLE_Pos)		/*!< 0x40 */
#define AS6500_CFG0_PIN_ENA_DISABLE         		AS6500_CFG0_PIN_ENA_DISABLE_Msk					/*!< Deactivation of all STOP pins */
#define AS6500_CFG0_PIN_ENA_RSTIDX_Pos          	(7U)
#define AS6500_CFG0_PIN_ENA_RSTIDX_Msk          	(0x1UL << AS6500_CFG0_PIN_ENA_RSTIDX_Pos)		/*!< 0x80 */
#define AS6500_CFG0_PIN_ENA_RSTIDX          		AS6500_CFG0_PIN_ENA_RSTIDX_Msk					/*!< Deactivation of RSTIDX pin */

/*******************  Bit definition for AS6500_CFG1 register  ********************/
#define AS6500_CFG1_HIT_ENA_STOP1_Pos           	(0U)
#define AS6500_CFG1_HIT_ENA_STOP1_Msk           	(0x1UL << AS6500_CFG1_HIT_ENA_STOP1_Pos)		/*!< 0x01 */
#define AS6500_CFG1_HIT_ENA_STOP1           		AS6500_CFG1_HIT_ENA_STOP1_Msk					/*!< Internal acceptance of STOP1 */
#define AS6500_CFG1_HIT_ENA_STOP2_Pos           	(1U)
#define AS6500_CFG1_HIT_ENA_STOP2_Msk           	(0x1UL << AS6500_CFG1_HIT_ENA_STOP2_Pos)		/*!< 0x02 */
#define AS6500_CFG1_HIT_ENA_STOP2           		AS6500_CFG1_HIT_ENA_STOP2_Msk					/*!< Internal acceptance of STOP2 */
#define AS6500_CFG1_HIT_ENA_STOP3_Pos           	(2U)
#define AS6500_CFG1_HIT_ENA_STOP3_Msk           	(0x1UL << AS6500_CFG1_HIT_ENA_STOP3_Pos)		/*!< 0x04 */
#define AS6500_CFG1_HIT_ENA_STOP3           		AS6500_CFG1_HIT_ENA_STOP3_Msk					/*!< Internal acceptance of STOP3 */
#define AS6500_CFG1_HIT_ENA_STOP4_Pos           	(3U)
#define AS6500_CFG1_HIT_ENA_STOP4_Msk           	(0x1UL << AS6500_CFG1_HIT_ENA_STOP4_Pos)		/*!< 0x08 */
#define AS6500_CFG1_HIT_ENA_STOP4           		AS6500_CFG1_HIT_ENA_STOP4_Msk					/*!< Internal acceptance of STOP4 */
#define AS6500_CFG1_CHANNEL_COMBINE_Pos         	(4U)
#define AS6500_CFG1_CHANNEL_COMBINE_Msk         	(0x03UL << AS6500_CFG1_CHANNEL_COMBINE_Pos)		/*!< 0x30 */
#define AS6500_CFG1_CHANNEL_COMBINE         		AS6500_CFG1_CHANNEL_COMBINE_Msk					/*!< CHANNEL_COMBINE[5:4]Combination of two STOP channels */
#define AS6500_CFG1_CHANNEL_COMBINE_0         		(0x01 << AS6500_CFG1_CHANNEL_COMBINE_Pos)	
#define AS6500_CFG1_CHANNEL_COMBINE_1         		(0x02 << AS6500_CFG1_CHANNEL_COMBINE_Pos)	
#define AS6500_CFG1_HIGH_RESOLUTION_Pos         	(6U)
#define AS6500_CFG1_HIGH_RESOLUTION_Msk         	(0x03UL << AS6500_CFG1_HIGH_RESOLUTION_Pos)		/*!< 0xC0 */
#define AS6500_CFG1_HIGH_RESOLUTION         		AS6500_CFG1_HIGH_RESOLUTION_Msk					/*!< HIGH_RESOLUTION[7:6]Internal multiple measurement */
#define AS6500_CFG1_HIGH_RESOLUTION_0         		(0x01 << AS6500_CFG1_HIGH_RESOLUTION_Pos)	
#define AS6500_CFG1_HIGH_RESOLUTION_1         		(0x02 << AS6500_CFG1_HIGH_RESOLUTION_Pos)	

/*******************  Bit definition for AS6500_CFG2 register  ********************/
#define AS6500_CFG2_Fixed_Value_Pos             	(0U)
#define AS6500_CFG2_Fixed_Value_Msk             	(0x3FUL << AS6500_CFG2_Fixed_Value_Pos)		/*!< 0x3F */
#define AS6500_CFG2_Fixed_Value             		AS6500_CFG2_Fixed_Value_Msk					/*!< Fixed_Value[5:0](000000b) */
#define AS6500_CFG2_Fixed_Value_0             		(0x01 << AS6500_CFG2_Fixed_Value_Pos)	
#define AS6500_CFG2_Fixed_Value_1             		(0x02 << AS6500_CFG2_Fixed_Value_Pos)	
#define AS6500_CFG2_Fixed_Value_2             		(0x04 << AS6500_CFG2_Fixed_Value_Pos)	
#define AS6500_CFG2_Fixed_Value_3             		(0x08 << AS6500_CFG2_Fixed_Value_Pos)	
#define AS6500_CFG2_Fixed_Value_4             		(0x10 << AS6500_CFG2_Fixed_Value_Pos)	
#define AS6500_CFG2_Fixed_Value_5             		(0x20 << AS6500_CFG2_Fixed_Value_Pos)	
#define AS6500_CFG2_COMMON_FIFO_READ_Pos        	(6U)
#define AS6500_CFG2_COMMON_FIFO_READ_Msk        	(0x1UL << AS6500_CFG2_COMMON_FIFO_READ_Pos)		/*!< 0x40 */
#define AS6500_CFG2_COMMON_FIFO_READ        		AS6500_CFG2_COMMON_FIFO_READ_Msk					/*!< INTN -> all active FIFOs have value */
#define AS6500_CFG2_BLOCKWISE_FIFO_READ_Pos     	(7U)
#define AS6500_CFG2_BLOCKWISE_FIFO_READ_Msk     	(0x1UL << AS6500_CFG2_BLOCKWISE_FIFO_READ_Pos)		/*!< 0x80 */
#define AS6500_CFG2_BLOCKWISE_FIFO_READ     		AS6500_CFG2_BLOCKWISE_FIFO_READ_Msk					/*!< INTN -> once FIFO is full */

/*******************  Bit definition for AS6500_CFG3 register  ********************/
#define AS6500_CFG3_REFCLK_DIVISIONS_0_Pos      	(0U)
#define AS6500_CFG3_REFCLK_DIVISIONS_0_Msk      	(0xFFUL << AS6500_CFG3_REFCLK_DIVISIONS_0_Pos)		/*!< 0xFF */
#define AS6500_CFG3_REFCLK_DIVISIONS_0      		AS6500_CFG3_REFCLK_DIVISIONS_0_Msk					/*!< REFCLK_DIVISIONS_0[7:0]REFCLK_DIVISONS lower 8 bits */
#define AS6500_CFG3_REFCLK_DIVISIONS_0_0      		(0x01 << AS6500_CFG3_REFCLK_DIVISIONS_0_Pos)	
#define AS6500_CFG3_REFCLK_DIVISIONS_0_1      		(0x02 << AS6500_CFG3_REFCLK_DIVISIONS_0_Pos)	
#define AS6500_CFG3_REFCLK_DIVISIONS_0_2      		(0x04 << AS6500_CFG3_REFCLK_DIVISIONS_0_Pos)	
#define AS6500_CFG3_REFCLK_DIVISIONS_0_3      		(0x08 << AS6500_CFG3_REFCLK_DIVISIONS_0_Pos)	
#define AS6500_CFG3_REFCLK_DIVISIONS_0_4      		(0x10 << AS6500_CFG3_REFCLK_DIVISIONS_0_Pos)	
#define AS6500_CFG3_REFCLK_DIVISIONS_0_5      		(0x20 << AS6500_CFG3_REFCLK_DIVISIONS_0_Pos)	
#define AS6500_CFG3_REFCLK_DIVISIONS_0_6      		(0x40 << AS6500_CFG3_REFCLK_DIVISIONS_0_Pos)	
#define AS6500_CFG3_REFCLK_DIVISIONS_0_7      		(0x80 << AS6500_CFG3_REFCLK_DIVISIONS_0_Pos)	

/*******************  Bit definition for AS6500_CFG4 register  ********************/
#define AS6500_CFG4_REFCLK_DIVISIONS_1_Pos      	(0U)
#define AS6500_CFG4_REFCLK_DIVISIONS_1_Msk      	(0xFFUL << AS6500_CFG4_REFCLK_DIVISIONS_1_Pos)		/*!< 0xFF */
#define AS6500_CFG4_REFCLK_DIVISIONS_1      		AS6500_CFG4_REFCLK_DIVISIONS_1_Msk					/*!< REFCLK_DIVISIONS_1[7:0]REFCLK_DIVISONS middle 8 bits */
#define AS6500_CFG4_REFCLK_DIVISIONS_1_0      		(0x01 << AS6500_CFG4_REFCLK_DIVISIONS_1_Pos)	
#define AS6500_CFG4_REFCLK_DIVISIONS_1_1      		(0x02 << AS6500_CFG4_REFCLK_DIVISIONS_1_Pos)	
#define AS6500_CFG4_REFCLK_DIVISIONS_1_2      		(0x04 << AS6500_CFG4_REFCLK_DIVISIONS_1_Pos)	
#define AS6500_CFG4_REFCLK_DIVISIONS_1_3      		(0x08 << AS6500_CFG4_REFCLK_DIVISIONS_1_Pos)	
#define AS6500_CFG4_REFCLK_DIVISIONS_1_4      		(0x10 << AS6500_CFG4_REFCLK_DIVISIONS_1_Pos)	
#define AS6500_CFG4_REFCLK_DIVISIONS_1_5      		(0x20 << AS6500_CFG4_REFCLK_DIVISIONS_1_Pos)	
#define AS6500_CFG4_REFCLK_DIVISIONS_1_6      		(0x40 << AS6500_CFG4_REFCLK_DIVISIONS_1_Pos)	
#define AS6500_CFG4_REFCLK_DIVISIONS_1_7      		(0x80 << AS6500_CFG4_REFCLK_DIVISIONS_1_Pos)	

/*******************  Bit definition for AS6500_CFG5 register  ********************/
#define AS6500_CFG5_REFCLK_DIVISIONS_2_Pos      	(0U)
#define AS6500_CFG5_REFCLK_DIVISIONS_2_Msk      	(0xFUL << AS6500_CFG5_REFCLK_DIVISIONS_2_Pos)		/*!< 0x0F */
#define AS6500_CFG5_REFCLK_DIVISIONS_2      		AS6500_CFG5_REFCLK_DIVISIONS_2_Msk					/*!< REFCLK_DIVISIONS_2[3:0]REFCLK_DIVISONS higher 4 bits */
#define AS6500_CFG5_REFCLK_DIVISIONS_2_0      		(0x01 << AS6500_CFG5_REFCLK_DIVISIONS_2_Pos)	
#define AS6500_CFG5_REFCLK_DIVISIONS_2_1      		(0x02 << AS6500_CFG5_REFCLK_DIVISIONS_2_Pos)	
#define AS6500_CFG5_REFCLK_DIVISIONS_2_2      		(0x04 << AS6500_CFG5_REFCLK_DIVISIONS_2_Pos)	
#define AS6500_CFG5_REFCLK_DIVISIONS_2_3      		(0x08 << AS6500_CFG5_REFCLK_DIVISIONS_2_Pos)	
#define AS6500_CFG5_Fixed_Value_Pos             	(4U)
#define AS6500_CFG5_Fixed_Value_Msk             	(0xFUL << AS6500_CFG5_Fixed_Value_Pos)		/*!< 0xF0 */
#define AS6500_CFG5_Fixed_Value             		AS6500_CFG5_Fixed_Value_Msk					/*!< Fixed_Value[7:4](0000b) */
#define AS6500_CFG5_Fixed_Value_0             		(0x01 << AS6500_CFG5_Fixed_Value_Pos)	
#define AS6500_CFG5_Fixed_Value_1             		(0x02 << AS6500_CFG5_Fixed_Value_Pos)	
#define AS6500_CFG5_Fixed_Value_2             		(0x04 << AS6500_CFG5_Fixed_Value_Pos)	
#define AS6500_CFG5_Fixed_Value_3             		(0x08 << AS6500_CFG5_Fixed_Value_Pos)	

/*******************  Bit definition for AS6500_CFG6 register  ********************/
#define AS6500_CFG6_Fixed_Value_Pos             	(0U)
#define AS6500_CFG6_Fixed_Value_Msk             	(0xFFUL << AS6500_CFG6_Fixed_Value_Pos)		/*!< 0xFF */
#define AS6500_CFG6_Fixed_Value             		AS6500_CFG6_Fixed_Value_Msk					/*!< Fixed_Value[7:0](11000000b) */
#define AS6500_CFG6_Fixed_Value_0             		(0x01 << AS6500_CFG6_Fixed_Value_Pos)	
#define AS6500_CFG6_Fixed_Value_1             		(0x02 << AS6500_CFG6_Fixed_Value_Pos)	
#define AS6500_CFG6_Fixed_Value_2             		(0x04 << AS6500_CFG6_Fixed_Value_Pos)	
#define AS6500_CFG6_Fixed_Value_3             		(0x08 << AS6500_CFG6_Fixed_Value_Pos)	
#define AS6500_CFG6_Fixed_Value_4             		(0x10 << AS6500_CFG6_Fixed_Value_Pos)	
#define AS6500_CFG6_Fixed_Value_5             		(0x20 << AS6500_CFG6_Fixed_Value_Pos)	
#define AS6500_CFG6_Fixed_Value_6             		(0x40 << AS6500_CFG6_Fixed_Value_Pos)	
#define AS6500_CFG6_Fixed_Value_7             		(0x80 << AS6500_CFG6_Fixed_Value_Pos)	

/*******************  Bit definition for AS6500_CFG7 register  ********************/
#define AS6500_CFG7_Fixed_Value_Pos             	(0U)
#define AS6500_CFG7_Fixed_Value_Msk             	(0x07FUL << AS6500_CFG7_Fixed_Value_Pos)		/*!< 0x7F */
#define AS6500_CFG7_Fixed_Value             		AS6500_CFG7_Fixed_Value_Msk					/*!< Fixed_Value[6:0](1000011b) */
#define AS6500_CFG7_Fixed_Value_0             		(0x01 << AS6500_CFG7_Fixed_Value_Pos)	
#define AS6500_CFG7_Fixed_Value_1             		(0x02 << AS6500_CFG7_Fixed_Value_Pos)	
#define AS6500_CFG7_Fixed_Value_2             		(0x04 << AS6500_CFG7_Fixed_Value_Pos)	
#define AS6500_CFG7_Fixed_Value_3             		(0x08 << AS6500_CFG7_Fixed_Value_Pos)	
#define AS6500_CFG7_Fixed_Value_4             		(0x10 << AS6500_CFG7_Fixed_Value_Pos)	
#define AS6500_CFG7_Fixed_Value_5             		(0x20 << AS6500_CFG7_Fixed_Value_Pos)	
#define AS6500_CFG7_Fixed_Value_6             		(0x40 << AS6500_CFG7_Fixed_Value_Pos)	
#define AS6500_CFG7_REFCLK_BY_XOSC_Pos          	(7U)
#define AS6500_CFG7_REFCLK_BY_XOSC_Msk          	(0x1UL << AS6500_CFG7_REFCLK_BY_XOSC_Pos)		/*!< 0x80 */
#define AS6500_CFG7_REFCLK_BY_XOSC          		AS6500_CFG7_REFCLK_BY_XOSC_Msk					/*!<  */

/*******************  Bit definition for AS6500_CFG8 register  ********************/
#define AS6500_CFG8_Fixed_Value_Pos             	(0U)
#define AS6500_CFG8_Fixed_Value_Msk             	(0xFFUL << AS6500_CFG8_Fixed_Value_Pos)		/*!< 0xFF */
#define AS6500_CFG8_Fixed_Value             		AS6500_CFG8_Fixed_Value_Msk					/*!< Fixed_Value[7:0](10100001b) */
#define AS6500_CFG8_Fixed_Value_0             		(0x01 << AS6500_CFG8_Fixed_Value_Pos)	
#define AS6500_CFG8_Fixed_Value_1             		(0x02 << AS6500_CFG8_Fixed_Value_Pos)	
#define AS6500_CFG8_Fixed_Value_2             		(0x04 << AS6500_CFG8_Fixed_Value_Pos)	
#define AS6500_CFG8_Fixed_Value_3             		(0x08 << AS6500_CFG8_Fixed_Value_Pos)	
#define AS6500_CFG8_Fixed_Value_4             		(0x10 << AS6500_CFG8_Fixed_Value_Pos)	
#define AS6500_CFG8_Fixed_Value_5             		(0x20 << AS6500_CFG8_Fixed_Value_Pos)	
#define AS6500_CFG8_Fixed_Value_6             		(0x40 << AS6500_CFG8_Fixed_Value_Pos)	
#define AS6500_CFG8_Fixed_Value_7             		(0x80 << AS6500_CFG8_Fixed_Value_Pos)	

/*******************  Bit definition for AS6500_CFG9 register  ********************/
#define AS6500_CFG9_Fixed_Value_Pos             	(0U)
#define AS6500_CFG9_Fixed_Value_Msk             	(0xFFUL << AS6500_CFG9_Fixed_Value_Pos)		/*!< 0xFF */
#define AS6500_CFG9_Fixed_Value             		AS6500_CFG9_Fixed_Value_Msk					/*!< Fixed_Value[7:0](00010011b) */
#define AS6500_CFG9_Fixed_Value_0             		(0x01 << AS6500_CFG9_Fixed_Value_Pos)	
#define AS6500_CFG9_Fixed_Value_1             		(0x02 << AS6500_CFG9_Fixed_Value_Pos)	
#define AS6500_CFG9_Fixed_Value_2             		(0x04 << AS6500_CFG9_Fixed_Value_Pos)	
#define AS6500_CFG9_Fixed_Value_3             		(0x08 << AS6500_CFG9_Fixed_Value_Pos)	
#define AS6500_CFG9_Fixed_Value_4             		(0x10 << AS6500_CFG9_Fixed_Value_Pos)	
#define AS6500_CFG9_Fixed_Value_5             		(0x20 << AS6500_CFG9_Fixed_Value_Pos)	
#define AS6500_CFG9_Fixed_Value_6             		(0x40 << AS6500_CFG9_Fixed_Value_Pos)	
#define AS6500_CFG9_Fixed_Value_7             		(0x80 << AS6500_CFG9_Fixed_Value_Pos)	

/*******************  Bit definition for AS6500_CFG10 register  ********************/
#define AS6500_CFG10_Fixed_Value_Pos            	(0U)
#define AS6500_CFG10_Fixed_Value_Msk            	(0xFFUL << AS6500_CFG10_Fixed_Value_Pos)		/*!< 0xFF */
#define AS6500_CFG10_Fixed_Value            		AS6500_CFG10_Fixed_Value_Msk					/*!< Fixed_Value[7:0](00000000b) */
#define AS6500_CFG10_Fixed_Value_0            		(0x01 << AS6500_CFG10_Fixed_Value_Pos)	
#define AS6500_CFG10_Fixed_Value_1            		(0x02 << AS6500_CFG10_Fixed_Value_Pos)	
#define AS6500_CFG10_Fixed_Value_2            		(0x04 << AS6500_CFG10_Fixed_Value_Pos)	
#define AS6500_CFG10_Fixed_Value_3            		(0x08 << AS6500_CFG10_Fixed_Value_Pos)	
#define AS6500_CFG10_Fixed_Value_4            		(0x10 << AS6500_CFG10_Fixed_Value_Pos)	
#define AS6500_CFG10_Fixed_Value_5            		(0x20 << AS6500_CFG10_Fixed_Value_Pos)	
#define AS6500_CFG10_Fixed_Value_6            		(0x40 << AS6500_CFG10_Fixed_Value_Pos)	
#define AS6500_CFG10_Fixed_Value_7            		(0x80 << AS6500_CFG10_Fixed_Value_Pos)	

/*******************  Bit definition for AS6500_CFG11 register  ********************/
#define AS6500_CFG11_Fixed_Value_Pos            	(0U)
#define AS6500_CFG11_Fixed_Value_Msk            	(0xFFUL << AS6500_CFG11_Fixed_Value_Pos)		/*!< 0xFF */
#define AS6500_CFG11_Fixed_Value            		AS6500_CFG11_Fixed_Value_Msk					/*!< Fixed_Value[7:0](00001010b) */
#define AS6500_CFG11_Fixed_Value_0            		(0x01 << AS6500_CFG11_Fixed_Value_Pos)	
#define AS6500_CFG11_Fixed_Value_1            		(0x02 << AS6500_CFG11_Fixed_Value_Pos)	
#define AS6500_CFG11_Fixed_Value_2            		(0x04 << AS6500_CFG11_Fixed_Value_Pos)	
#define AS6500_CFG11_Fixed_Value_3            		(0x08 << AS6500_CFG11_Fixed_Value_Pos)	
#define AS6500_CFG11_Fixed_Value_4            		(0x10 << AS6500_CFG11_Fixed_Value_Pos)	
#define AS6500_CFG11_Fixed_Value_5            		(0x20 << AS6500_CFG11_Fixed_Value_Pos)	
#define AS6500_CFG11_Fixed_Value_6            		(0x40 << AS6500_CFG11_Fixed_Value_Pos)	
#define AS6500_CFG11_Fixed_Value_7            		(0x80 << AS6500_CFG11_Fixed_Value_Pos)	

/*******************  Bit definition for AS6500_CFG12 register  ********************/
#define AS6500_CFG12_Fixed_Value_Pos            	(0U)
#define AS6500_CFG12_Fixed_Value_Msk            	(0xFFUL << AS6500_CFG12_Fixed_Value_Pos)		/*!< 0xFF */
#define AS6500_CFG12_Fixed_Value            		AS6500_CFG12_Fixed_Value_Msk					/*!< Fixed_Value[7:0](11001100b) */
#define AS6500_CFG12_Fixed_Value_0            		(0x01 << AS6500_CFG12_Fixed_Value_Pos)	
#define AS6500_CFG12_Fixed_Value_1            		(0x02 << AS6500_CFG12_Fixed_Value_Pos)	
#define AS6500_CFG12_Fixed_Value_2            		(0x04 << AS6500_CFG12_Fixed_Value_Pos)	
#define AS6500_CFG12_Fixed_Value_3            		(0x08 << AS6500_CFG12_Fixed_Value_Pos)	
#define AS6500_CFG12_Fixed_Value_4            		(0x10 << AS6500_CFG12_Fixed_Value_Pos)	
#define AS6500_CFG12_Fixed_Value_5            		(0x20 << AS6500_CFG12_Fixed_Value_Pos)	
#define AS6500_CFG12_Fixed_Value_6            		(0x40 << AS6500_CFG12_Fixed_Value_Pos)	
#define AS6500_CFG12_Fixed_Value_7            		(0x80 << AS6500_CFG12_Fixed_Value_Pos)	

/*******************  Bit definition for AS6500_CFG13 register  ********************/
#define AS6500_CFG13_Fixed_Value_Pos            	(0U)
#define AS6500_CFG13_Fixed_Value_Msk            	(0xFFUL << AS6500_CFG13_Fixed_Value_Pos)		/*!< 0xFF */
#define AS6500_CFG13_Fixed_Value            		AS6500_CFG13_Fixed_Value_Msk					/*!< Fixed_Value[7:0](11001100b) */
#define AS6500_CFG13_Fixed_Value_0            		(0x01 << AS6500_CFG13_Fixed_Value_Pos)	
#define AS6500_CFG13_Fixed_Value_1            		(0x02 << AS6500_CFG13_Fixed_Value_Pos)	
#define AS6500_CFG13_Fixed_Value_2            		(0x04 << AS6500_CFG13_Fixed_Value_Pos)	
#define AS6500_CFG13_Fixed_Value_3            		(0x08 << AS6500_CFG13_Fixed_Value_Pos)	
#define AS6500_CFG13_Fixed_Value_4            		(0x10 << AS6500_CFG13_Fixed_Value_Pos)	
#define AS6500_CFG13_Fixed_Value_5            		(0x20 << AS6500_CFG13_Fixed_Value_Pos)	
#define AS6500_CFG13_Fixed_Value_6            		(0x40 << AS6500_CFG13_Fixed_Value_Pos)	
#define AS6500_CFG13_Fixed_Value_7            		(0x80 << AS6500_CFG13_Fixed_Value_Pos)	

/*******************  Bit definition for AS6500_CFG14 register  ********************/
#define AS6500_CFG14_Fixed_Value_Pos            	(0U)
#define AS6500_CFG14_Fixed_Value_Msk            	(0xFFUL << AS6500_CFG14_Fixed_Value_Pos)		/*!< 0xFF */
#define AS6500_CFG14_Fixed_Value            		AS6500_CFG14_Fixed_Value_Msk					/*!< Fixed_Value[7:0](11110001b) */
#define AS6500_CFG14_Fixed_Value_0            		(0x01 << AS6500_CFG14_Fixed_Value_Pos)	
#define AS6500_CFG14_Fixed_Value_1            		(0x02 << AS6500_CFG14_Fixed_Value_Pos)	
#define AS6500_CFG14_Fixed_Value_2            		(0x04 << AS6500_CFG14_Fixed_Value_Pos)	
#define AS6500_CFG14_Fixed_Value_3            		(0x08 << AS6500_CFG14_Fixed_Value_Pos)	
#define AS6500_CFG14_Fixed_Value_4            		(0x10 << AS6500_CFG14_Fixed_Value_Pos)	
#define AS6500_CFG14_Fixed_Value_5            		(0x20 << AS6500_CFG14_Fixed_Value_Pos)	
#define AS6500_CFG14_Fixed_Value_6            		(0x40 << AS6500_CFG14_Fixed_Value_Pos)	
#define AS6500_CFG14_Fixed_Value_7            		(0x80 << AS6500_CFG14_Fixed_Value_Pos)	

/*******************  Bit definition for AS6500_CFG15 register  ********************/
#define AS6500_CFG15_Fixed_Value_Pos            	(0U)
#define AS6500_CFG15_Fixed_Value_Msk            	(0xFFUL << AS6500_CFG15_Fixed_Value_Pos)		/*!< 0xFF */
#define AS6500_CFG15_Fixed_Value            		AS6500_CFG15_Fixed_Value_Msk					/*!< Fixed_Value[7:0](01111101b) */
#define AS6500_CFG15_Fixed_Value_0            		(0x01 << AS6500_CFG15_Fixed_Value_Pos)	
#define AS6500_CFG15_Fixed_Value_1            		(0x02 << AS6500_CFG15_Fixed_Value_Pos)	
#define AS6500_CFG15_Fixed_Value_2            		(0x04 << AS6500_CFG15_Fixed_Value_Pos)	
#define AS6500_CFG15_Fixed_Value_3            		(0x08 << AS6500_CFG15_Fixed_Value_Pos)	
#define AS6500_CFG15_Fixed_Value_4            		(0x10 << AS6500_CFG15_Fixed_Value_Pos)	
#define AS6500_CFG15_Fixed_Value_5            		(0x20 << AS6500_CFG15_Fixed_Value_Pos)	
#define AS6500_CFG15_Fixed_Value_6            		(0x40 << AS6500_CFG15_Fixed_Value_Pos)	
#define AS6500_CFG15_Fixed_Value_7            		(0x80 << AS6500_CFG15_Fixed_Value_Pos)	

/*******************  Bit definition for AS6500_CFG16 register  ********************/
#define AS6500_CFG16_Fixed_Value_Pos            	(0U)
#define AS6500_CFG16_Fixed_Value_Msk            	(0xFFUL << AS6500_CFG16_Fixed_Value_Pos)		/*!< 0xFF */
#define AS6500_CFG16_Fixed_Value            		AS6500_CFG16_Fixed_Value_Msk					/*!< Fixed_Value[7:0](00000100b) */
#define AS6500_CFG16_Fixed_Value_0            		(0x01 << AS6500_CFG16_Fixed_Value_Pos)	
#define AS6500_CFG16_Fixed_Value_1            		(0x02 << AS6500_CFG16_Fixed_Value_Pos)	
#define AS6500_CFG16_Fixed_Value_2            		(0x04 << AS6500_CFG16_Fixed_Value_Pos)	
#define AS6500_CFG16_Fixed_Value_3            		(0x08 << AS6500_CFG16_Fixed_Value_Pos)	
#define AS6500_CFG16_Fixed_Value_4            		(0x10 << AS6500_CFG16_Fixed_Value_Pos)	
#define AS6500_CFG16_Fixed_Value_5            		(0x20 << AS6500_CFG16_Fixed_Value_Pos)	
#define AS6500_CFG16_Fixed_Value_6            		(0x40 << AS6500_CFG16_Fixed_Value_Pos)	
#define AS6500_CFG16_Fixed_Value_7            		(0x80 << AS6500_CFG16_Fixed_Value_Pos)	


#endif /* INC_AS6500_BIT_DEFINITION_H_ */
