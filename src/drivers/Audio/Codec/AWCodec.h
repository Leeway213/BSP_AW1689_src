/** @file
*
*  Copyright (c) 2007-2016, Allwinner Technology Co., Ltd. All rights reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
**/
#pragma once

#include <wdm.h>
#include <portcls.h>

/*Codec Digital Register*/
#define SUNXI_DA_CTL                			(0x00)
#define SUNXI_DA_FAT0                  			(0x04)
#define SUNXI_DA_FAT1               			(0x08)
#define SUNXI_DA_ISTA                           (0x0c)
#define SUNXI_DA_RXFIFO                         (0x10)
#define SUNXI_DA_FCTL                          	(0x14)
#define SUNXI_DA_FSTA                          	(0x18)
#define SUNXI_DA_INT                           	(0x1c)
#define SUNXI_DA_TXFIFO                        	(0x20)
#define SUNXI_DA_CLKD                          	(0x24)
#define SUNXI_DA_TXCNT                        	(0x28)
#define SUNXI_DA_RXCNT                         	(0x2c)
#define SUNXI_DA_TXCHSEL                       	(0x30)
#define SUNXI_DA_TXCHMAP                       	(0x34)
#define SUNXI_DA_RXCHSEL                       	(0x38)
#define SUNXI_DA_RXCHMAP                       	(0x3c)

#define SUNXI_CHIP_AUDIO_RST           			(0x200)
#define SUNXI_SYSCLK_CTL                       	(0x20c)
#define SUNXI_MOD_CLK_ENA                      	(0x210)
#define SUNXI_MOD_RST_CTL                      	(0x214)
#define SUNXI_SYS_SR_CTRL                      	(0x218)
#define SUNXI_SYS_SRC_CLK                      	(0x21c)
#define SUNXI_SYS_DVC_MOD                      	(0x220)

#define SUNXI_AIF1_CLK_CTRL                     (0x240)
#define SUNXI_AIF1_ADCDAT_CTRL         			(0x244)
#define SUNXI_AIF1_DACDAT_CTRL         			(0x248)
#define SUNXI_AIF1_MXR_SRC                     	(0x24c)
#define SUNXI_AIF1_VOL_CTRL1           			(0x250)
#define SUNXI_AIF1_VOL_CTRL2           			(0x254)
#define SUNXI_AIF1_VOL_CTRL3           			(0x258)
#define SUNXI_AIF1_VOL_CTRL4           			(0x25c)
#define SUNXI_AIF1_MXR_GAIN                    	(0x260)
#define SUNXI_AIF1_RXD_CTRL                    	(0x264)

#define SUNXI_AIF2_CLK_CTRL                    	(0x280)
#define SUNXI_AIF2_ADCDAT_CTRL         			(0x284)
#define SUNXI_AIF2_DACDAT_CTRL         			(0x288)
#define SUNXI_AIF2_MXR_SRC                     	(0x28c)
#define SUNXI_AIF2_VOL_CTRL1           			(0x290)
#define SUNXI_AIF2_VOL_CTRL2           			(0x298)
#define SUNXI_AIF2_MXR_GAIN                    	(0x2a0)
#define SUNXI_AIF2_RXD_CTRL                    	(0x2a4)

#define SUNXI_AIF3_CLK_CTRL                    	(0x2c0)
#define SUNXI_AIF3_ADCDAT_CTRL         			(0x2c4)
#define SUNXI_AIF3_DACDAT_CTRL         			(0x2c8)
#define SUNXI_AIF3_SGP_CTRL                    	(0x2cc)
#define SUNXI_AIF3_RXD_CTRL                    	(0x2e4)

#define SUNXI_ADC_DIG_CTRL                     	(0x300)
#define SUNXI_ADC_VOL_CTRL                     	(0x304)
#define SUNXI_ADC_DBG_CTRL                     	(0x308)

#define SUNXI_HMIC_CTRL1                       	(0x310)
#define SUNXI_HMIC_CTRL2                       	(0x314)
#define SUNXI_HMIC_STS                         	(0x318)

#define SUNXI_DAC_DIG_CTRL                     	(0x320)
#define SUNXI_DAC_VOL_CTRL                     	(0x324)
#define SUNXI_DAC_DBG_CTRL                     	(0x328)
#define SUNXI_DAC_MXR_SRC                      	(0x330)
#define SUNXI_DAC_MXR_GAIN                     	(0x334)

#define SUNXI_AC_ADC_DAPLSTA           			(0x400)
#define SUNXI_AC_ADC_DAPRSTA           			(0x404)
#define SUNXI_AC_ADC_DAPLCTRL          			(0x408)
#define SUNXI_AC_ADC_DAPRCTRL          			(0x40c)
#define SUNXI_AC_ADC_DAPLTL                    	(0x410)
#define SUNXI_AC_ADC_DAPRTL                    	(0x414)
#define SUNXI_AC_ADC_DAPLHAC           			(0x418)
#define SUNXI_AC_ADC_DAPLLAC           			(0x41c)
#define SUNXI_AC_ADC_DAPRHAC           			(0x420)
#define SUNXI_AC_ADC_DAPRLAC           			(0x424)
#define SUNXI_AC_ADC_DAPLDT                    	(0x428)
#define SUNXI_AC_ADC_DAPLAT                    	(0x42c)
#define SUNXI_AC_ADC_DAPRDT                    	(0x430)
#define SUNXI_AC_ADC_DAPRAT                    	(0x434)
#define SUNXI_AC_ADC_DAPNTH                    	(0x438)
#define SUNXI_AC_ADC_DAPLHNAC          			(0x43c)
#define SUNXI_AC_ADC_DAPLLNAC          			(0x440)
#define SUNXI_AC_ADC_DAPRHNAC          			(0x444)
#define SUNXI_AC_ADC_DAPRLNAC          			(0x448)
#define SUNXI_AC_DAPHHPFC                      	(0x44c)
#define SUNXI_AC_DAPLHPFC                      	(0x450)
#define SUNXI_AC_DAPOPT                         (0x454)
#define SUNXI_AC_DAC_DAPCTRL           			(0x480)

#define SUNXI_AGC_ENA							(0x4d0)
#define SUNXI_DRC_ENA							(0x4d4)
#define SUNXI_SRC_BISTCR						(0x4d8)
#define SUNXI_SRC_BISTST						(0x4dc)
#define SUNXI_SRC1_CTRL1						(0x4e0)
#define SUNXI_SRC1_CTRL2						(0x4e4)
#define SUNXI_SRC1_CTRL3						(0x4e8)
#define SUNXI_SRC1_CTRL4						(0x4ec)
#define SUNXI_SRC2_CTRL1						(0x4f0)
#define SUNXI_SRC2_CTRL2						(0x4F4)
#define SUNXI_SRC2_CTRL3						(0x4f8)
#define SUNXI_SRC2_CTRL4						(0x4fc)

#define SUNXI_AC_DRC0_HHPFC          			(0x600)
#define SUNXI_AC_DRC0_LHPFC          			(0x604)

#define SUNXI_AC_DRC0_CTRL	          			(0x608)
#define SUNXI_AC_DRC0_LPFHAT          			(0x60c)
#define SUNXI_AC_DRC0_LPFLAT          			(0x610)
#define SUNXI_AC_DRC0_RPFHAT          			(0x614)
#define SUNXI_AC_DRC0_RPFLAT          			(0x618)
#define SUNXI_AC_DRC0_LPFHRT          			(0x61c)
#define SUNXI_AC_DRC0_LPFLRT          			(0x620)
#define SUNXI_AC_DRC0_RPFHRT          			(0x624)
#define SUNXI_AC_DRC0_RPFLRT          			(0x628)
#define SUNXI_AC_DRC0_LRMSHAT          			(0x62c)
#define SUNXI_AC_DRC0_LRMSLAT          			(0x630)
#define SUNXI_AC_DRC0_RRMSHAT          			(0x634)
#define SUNXI_AC_DRC0_RRMSLAT          			(0x638)
#define SUNXI_AC_DRC0_HCT	          			(0x63c)
#define SUNXI_AC_DRC0_LCT	          			(0x640)
#define SUNXI_AC_DRC0_HKC	          			(0x644)
#define SUNXI_AC_DRC0_LKC	          			(0x648)
#define SUNXI_AC_DRC0_HOPC	          			(0x64c)
#define SUNXI_AC_DRC0_LOPC	          			(0x650)
#define SUNXI_AC_DRC0_HLT	          			(0x654)
#define SUNXI_AC_DRC0_LLT	          			(0x658)
#define SUNXI_AC_DRC0_HKI	          			(0x65c) /*AC_DRC_HKl*/
#define SUNXI_AC_DRC0_LKI	          			(0x660) /*AC_DRC_LKl*/
#define SUNXI_AC_DRC0_HOPL						(0x664)
#define SUNXI_AC_DRC0_LOPL						(0x668)
#define SUNXI_AC_DRC0_HET						(0x66c)
#define SUNXI_AC_DRC0_LET						(0x670)
#define SUNXI_AC_DRC0_HKE						(0x674)
#define SUNXI_AC_DRC0_LKE						(0x678)
#define SUNXI_AC_DRC0_HOPE						(0x67c)
#define SUNXI_AC_DRC0_LOPE						(0x680)
#define SUNXI_AC_DRC0_HKN						(0x684)
#define SUNXI_AC_DRC0_LKN						(0x688)
#define SUNXI_AC_DRC0_SFHAT						(0x68c)
#define SUNXI_AC_DRC0_SFLAT						(0x690)
#define SUNXI_AC_DRC0_SFHRT						(0x694)
#define SUNXI_AC_DRC0_SFLRT						(0x698)
#define SUNXI_AC_DRC0_MXGHS						(0x69c)
#define SUNXI_AC_DRC0_MXGLS						(0x6a0)
#define SUNXI_AC_DRC0_MNGHS						(0x6a4)
#define SUNXI_AC_DRC0_MNGLS						(0x6a8)
#define SUNXI_AC_DRC0_EPSHC						(0x6ac)
#define SUNXI_AC_DRC0_EPSLC						(0x6b0)
#define SUNXI_AC_DRC0_OPT						(0x6b4)

#define SUNXI_AC_DRC1_HHPFC						(0x700)
#define SUNXI_AC_DRC1_LHPFC						(0x704)
#define SUNXI_AC_DRC1_CTRL						(0x708)
#define SUNXI_AC_DRC1_LPFHAT					(0x70c)
#define SUNXI_AC_DRC1_LPFLAT					(0x710)
#define SUNXI_AC_DRC1_RPFHAT					(0x714)
#define SUNXI_AC_DRC1_RPFLAT					(0x718)
#define SUNXI_AC_DRC1_LPFHRT					(0x71c)
#define SUNXI_AC_DRC1_LPFLRT					(0x720)
#define SUNXI_AC_DRC1_RPFHRT					(0x724)
#define SUNXI_AC_DRC1_RPFLRT					(0x728)
#define SUNXI_AC_DRC1_LRMSHAT					(0x72c)
#define SUNXI_AC_DRC1_LRMSLAT					(0x730)
#define SUNXI_AC_DRC1_RRMSHAT					(0x734)
#define SUNXI_AC_DRC1_RRMSLAT					(0x738)
#define SUNXI_AC_DRC1_HCT						(0x73c)
#define SUNXI_AC_DRC1_LCT						(0x740)
#define SUNXI_AC_DRC1_HKC						(0x744)
#define SUNXI_AC_DRC1_LKC						(0x748)
#define SUNXI_AC_DRC1_HOPC						(0x74c)
#define SUNXI_AC_DRC1_LOPC						(0x750)
#define SUNXI_AC_DRC1_HLT						(0x754)
#define SUNXI_AC_DRC1_LLT						(0x758)
#define SUNXI_AC_DRC1_HKI						(0x75c)
#define SUNXI_AC_DRC1_LKI						(0x760)
#define SUNXI_AC_DRC1_HOPL						(0x764)
#define SUNXI_AC_DRC1_LOPL						(0x768)
#define SUNXI_AC_DRC1_HET						(0x76c)
#define SUNXI_AC_DRC1_LET						(0x770)
#define SUNXI_AC_DRC1_HKE						(0x774)
#define SUNXI_AC_DRC1_LKE						(0x778)
#define SUNXI_AC_DRC1_HOPE						(0x77c)
#define SUNXI_AC_DRC1_LOPE						(0x780)
#define SUNXI_AC_DRC1_HKN						(0x784)
#define SUNXI_AC_DRC1_LKN						(0x788)
#define SUNXI_AC_DRC1_SFHAT						(0x78c)
#define SUNXI_AC_DRC1_SFLAT						(0x790)
#define SUNXI_AC_DRC1_SFHRT						(0x794)
#define SUNXI_AC_DRC1_SFLRT						(0x798)
#define SUNXI_AC_DRC1_MXGHS						(0x79c)
#define SUNXI_AC_DRC1_MXGLS						(0x7a0)
#define SUNXI_AC_DRC1_MNGHS						(0x7a4)
#define SUNXI_AC_DRC1_MNGLS						(0x7a8)
#define SUNXI_AC_DRC1_EPSHC						(0x7ac)
#define SUNXI_AC_DRC1_EPSLC						(0x7b0)
#define SUNXI_AC_DRC1_OPT						(0x7b4)

/*
*      SUNXI_DA_CTL
*      I2S_AP Control Reg
*      DA_CTL:codecbase+0x00
*/
#define SDO_EN                                 	(8)
#define ASS                                     (6)
#define MS                                      (5)
#define PCM                                     (4)
#define LOOP                                   	(3)
#define TXEN                                   	(2)
#define RXEN                                   	(1)
#define GEN                                     (0)

/*
*      SUNXI_DA_FAT0
*      I2S_AP Format Reg
*      DA_FAT0:codecbase+0x04
*/
#define LRCP                                   	(7)
#define BCP                                     (6)
#define SR                                      (4)
#define WSS                                     (2)
#define FMT                                     (0)

/*
*      I2S_AP Format Reg1
*      DA_FAT1:codecbase+0x08
*/
#define PCM_SYNC_PERIOD                        	(12)
#define PCM_SYNC_OUT                   			(11)
#define PCM_OUT_MUTE                   			(10)
#define MLS                                     (9)
#define SEXT                                   	(8)
#define SI                                      (6)
#define SW                                      (5)
#define SSYNC                                  	(4)
#define RX_PDM                                 	(2)
#define TX_PDM                                 	(0)

/*
*      I2S_AP TX FIFO  register
*      DA_ISTA:codecbase+0x0C
*/
#define TXU_INT                                 (6)
#define TXO_INT                                 (5)
#define TXE_INT                                 (4)
#define RXU_INT                                 (2)
#define RXO_INT                                 (1)
#define RXA_INT                                 (0)

/*
*      I2S_AP RX FIFO  register
*      DA_RXFIFO:codecbase+0x10
*/
#define RX_DATA                                	(0)

/*
*      SUNXI_DA_FCTL
*      I2S_AP FIFO     Control register
*      DA_FCTL:codecbase+0x14
*/
#define HUB_EN                                 (31)
#define FTX                                     (25)
#define FRX                                     (24)
#define TXTL                                   	(12)
#define RXTL                                   	(4)
#define TXIM                                   	(2)
#define RXOM                                   	(0)

/*
*      I2S_AP FIFO     Status register
*      DA_FSTA:codecbase+0x18
*/
#define TXE                                    	(28)
#define TXE_CNT                                 (16)
#define RXA                                     (8)
#define RXA_CNT                                 (0)

/*
*      SUNXI_DA_INT
*      I2S_AP DMA & Interrupt Control register
*      DA_INT:codecbase+0x1c
*/
#define TX_DRQ                                 	(7)
#define TXUI_EN                                 (6)
#define TXOI_EN                                 (5)
#define TXEI_EN                                 (4)
#define RX_DRQ                                 	(3)
#define RXUI_EN                                 (2)
#define RXOI_EN                                 (1)
#define RXAI_EN                                 (0)

/*
*      I2S_AP Interrupt Status register
*      DA_TXFIFO:codecbase+0x20
*/
#define TX_DATA                                 (0)

/*
*      SUNXI_DA_CLKD
*      I2S_AP Clock Divide register
*      DA_CLKD:codecbase+0x24
*/
#define MCLKO_EN                               	(7)
#define BCLKDIV                                 (4)
#define MCLKDIV                                 (0)

/*
*      SUNXI_DA_TXCNT
*      I2S_AP TX Counter register
*      DA_TXCNT:codecbase+0x28
*/
#define TX_CNT                                 	(0)

/*
*      SUNXI_DA_RXCNT
*      I2S_AP RX Counter register
*      DA_RXCNT:codecbase+0x2c
*/
#define RX_CNT                                 	(0)

/*
*      SUNXI_DA_TXCHSEL
*      I2S_AP TX Channel Select register
*      DA_TXCHSEL:codecbase+0x30
*/
#define TX_CHSEL                               	(0)

/*
*      SUNXI_DA_TXCHMAP
*      I2S_AP TX Channel Mapping register
*      DA_TXCHMAP:codecbase+0x34
*/
#define TX_CH3_MAP                             	(12)
#define TX_CH2_MAP                             	(8)
#define TX_CH1_MAP                             	(4)
#define TX_CH0_MAP                             	(0)

/*
*      SUNXI_DA_RXCHSEL
*      I2S_AP RX Channel Select register
*      DA_RXCHSEL:codecbase+0x38
*/
#define RX_CHSEL                               	(0)

/*
*      SUNXI_DA_RXCHMAP
*      I2S_AP RX Channel Mapping register
*      DA_RXCHMAP:codecbase+0x3c
*/
#define RX_CH3_MAP                             	(12)
#define RX_CH2_MAP                             	(8)
#define RX_CH1_MAP                             	(4)
#define RX_CH0_MAP                             	(0)

/*
*      Chip Soft Reset register
*      Codec_RST:codecbase+0x200
*/
// Reserved

/*
*      SUNXI_SYSCLK_CTL
*      System Clock Control Register
*      SYSCLK_CTL:codecbase+0x20c
*/
#define AIF1CLK_ENA                            (11)
#define AIF1CLK_SRC                            (8)
#define AIF2CLK_ENA                            (7)
#define AIF2CLK_SRC                            (4)
#define SYSCLK_ENA                             (3)
#define SYSCLK_SRC                             (0)

/*
*      SUNXI_MOD_CLK_ENA
*      Module Clock Control Register
*      MOD_CLK_ENA:codecbase+0x210
*/
#define MODULE_CLK_EN_CTL              			(0)
#define AIF1_MOD_CLK_EN                        	(15)
#define AIF2_MOD_CLK_EN                        	(14)
#define AIF3_MOD_CLK_EN                        	(13)
#define SRC1_MOD_CLK_EN                        	(11)
#define SRC2_MOD_CLK_EN                        	(10)
#define HPF_AGC_MOD_CLK_EN             			(7)
#define HPF_DRC0_MOD_CLK_EN            			(6)
#define HPF_DRC1_MOD_CLK_EN            			(5)
#define ADC_DIGITAL_MOD_CLK_EN 					(3)
#define DAC_DIGITAL_MOD_CLK_EN 					(2)

/*
*      SUNXI_MOD_RST_CTL
*      Module Reset Control Register
*      MOD_RST_CTL:codecbase+0x214
*/
#define MODULE_RST_CTL_BIT             			(0)
#define AIF1_MOD_RST_CTL               			(15)
#define AIF2_MOD_RST_CTL               			(14)
#define AIF3_MOD_RST_CTL               			(13)
#define SRC1_MOD_RST_CTL               			(11)
#define SRC2_MOD_RST_CTL               			(10)
#define HPF_AGC_MOD_RST_CTL            			(7)
#define HPF_DRC0_MOD_RST_CTL           			(6)
#define HPF_DRC1_MOD_RST_CTL           			(5)
#define ADC_DIGITAL_MOD_RST_CTL        			(3)
#define DAC_DIGITAL_MOD_RST_CTL        			(2)

/*
*      SUNXI_SYS_SR_CTRL
*      System Sample rate & SRC Configuration Register
*      SYS_SR_CTRL:codecbase+0x218
*/
#define AIF1_FS                                	(12)
#define AIF2_FS                                 (8)
#define SRC1_ENA                               	(3)
#define SRC1_SRC                               	(2)
#define SRC2_ENA                               	(1)
#define SRC2_SRC                               	(0)

/*
*      System SRC Clock source Select Register
*      SYS_SRC_CLK:codecbase+0x21c
*/
#define SRC_CLK_SLT                            	(0)

/*
*      System SRC Clock source Select Register
*      SYS_SRC_CLK_220:codecbase+0x220
*/
#define AIFDVC_FS_SEL                  			(0)

/*
*      SUNXI_AIF1_CLK_CTRL
*      AIF1 BCLK/LRCK Control Register
*      AIF1CLK_CTRL:codecbase+0x240
*/
#define AIF1_MSTR_MOD                  			(15)
#define AIF1_BCLK_INV                  			(14)
#define AIF1_LRCK_INV                  			(13)
#define AIF1_BCLK_DIV                  			(9)
#define AIF1_LRCK_DIV                  			(6)
#define AIF1_WORD_SIZ                  			(4)
#define AIF1_DATA_FMT                  			(2)
#define DSP_MONO_PCM                   			(1)
#define AIF1_TDMM_ENA                  			(0)

/*
*      SUNXI_AIF1_ADCDAT_CTRL
*      AIF1 ADCDAT Control Register
*      AIF1_ADCDAT_CTRL:codecbase+0x244
*/
#define AIF1_AD0L_ENA                  			(15)
#define AIF1_AD0R_ENA                  			(14)
#define AIF1_AD1L_ENA                  			(13)
#define AIF1_AD1R_ENA                  			(12)
#define AIF1_AD0L_SRC                  			(10)
#define AIF1_AD0R_SRC                  			(8)
#define AIF1_AD1L_SRC                  			(6)
#define AIF1_AD1R_SRC                  			(4)
#define AIF1_ADCP_ENA                  			(3)
#define AIF1_ADUL_ENA                  			(2)
#define AIF1_SLOT_SIZ                  			(0)

/*
*      SUNXI_AIF1_DACDAT_CTRL
*      AIF1 DACDAT Control Register
*      AIF1_DACDAT_CTRL:codecbase+0x248
*/
#define AIF1_DA0L_ENA                  			(15)
#define AIF1_DA0R_ENA                  			(14)
#define AIF1_DA1L_ENA                  			(13)
#define AIF1_DA1R_ENA                  			(12)
#define AIF1_DA0L_SRC                  			(10)
#define AIF1_DA0R_SRC                  			(8)
#define AIF1_DA1L_SRC                  			(6)
#define AIF1_DA1R_SRC                  			(4)
#define AIF1_DACP_ENA                  			(3)
#define AIF1_DAUL_ENA                  			(2)
#define AIF1_LOOP_ENA                  			(0)

/*
*      SUNXI_AIF1_MXR_SRC
*      AIF1 Digital Mixer Source Select Register
*      AIF1_MXR_SRC:codecbase+0x24c
*/
#define AIF1_AD0L_MXL_SRC_AIF1DA0L             	(15)
#define AIF1_AD0L_MXL_SRC_AIF2DACL             	(14)
#define AIF1_AD0L_MXL_SRC_ADCL         			(13)
#define AIF1_AD0L_MXL_SRC_AIF2DACR             	(12)
#define AIF1_AD0L_MXL_SRC              			(12)
#define AIF1_AD0R_MXR_SRC_AIF1DA0R             	(11)
#define AIF1_AD0R_MXR_SRC_AIF2DACR             	(10)
#define AIF1_AD0R_MXR_SRC_ADCR         			(9)
#define AIF1_AD0R_MXR_SRC_AIF2DACL             	(8)
#define AIF1_AD0R_MXR_SRC             	 		(8)
#define AIF1_AD1L_MXR_AIF2_DACL					(7)
#define AIF1_AD1L_MXR_ADCL             			(6)
#define AIF1_AD1R_MXR_AIF2_DACR					(3)
#define AIF1_AD1R_MXR_ADCR             			(2)
//#define AIF1_AD1R_MXR_SRC_C            			(0)

/*
*      SUNXI_AIF1_VOL_CTRL1
*      AIF1 Volume Control 1 Register
*      AIF1_VOL_CTRL1:codecbase+0x250
*/
#define AIF1_AD0L_VOL                  			(8)
#define AIF1_AD0R_VOL                  			(0)

/*
*      SUNXI_AIF1_VOL_CTRL2
*      AIF1 Volume Control 2 Register
*      AIF1_VOL_CTRL2:codecbase+0x254
*/
#define AIF1_AD1L_VOL                  			(8)
#define AIF1_AD1R_VOL                  			(0)

/*
*      SUNXI_AIF1_VOL_CTRL3
*      AIF1 Volume Control 3 Register
*      AIF1_VOL_CTRL3:codecbase+0x258
*/
#define AIF1_DA0L_VOL                  			(8)
#define AIF1_DA0R_VOL                  			(0)

/*
*      SUNXI_AIF1_VOL_CTRL4
*      AIF1 Volume Control 4 Register
*      AIF1_VOL_CTRL4:codecbase+0x25c
*/
#define AIF1_DA1L_VOL                  			(8)
#define AIF1_DA1R_VOL                  			(0)

/*
*      SUNXI_AIF1_MXR_GAIN
*      AIF1 Digital Mixer Gain Control Register
*      AIF1_MXR_GAIN:codecbase+0x260
*/
#define AIF1_AD0L_MXR_GAIN             			(12)
#define AIF1_AD0R_MXR_GAIN             			(8)
#define AIF1_AD1L_MXR_GAIN             			(6)
#define AIF1_AD1R_MXR_GAIN             			(2)

/*
*      AIF1 Receiver Data Discarding Control Register
*      AIF1_RXD_CTRL:codecbase+0x264
*/
#define AIF1_RXD_CTRL_DISCARD  					(8)

/*
*      SUNXI_AIF2_CLK_CTRL
*      AIF2 BCLK/LRCK Control Register
*      AIF2_CLK_CTRL:codecbase+0x280
*/
#define AIF2_MSTR_MOD                  			(15)
#define AIF2_BCLK_INV                  			(14)
#define AIF2_LRCK_INV                  			(13)
#define AIF2_BCLK_DIV                  			(9)
#define AIF2_LRCK_DIV                  			(6)
#define AIF2_WORD_SIZ                  			(4)
#define AIF2_DATA_FMT                  			(2)
#define AIF2_MONO_PCM                  			(1)

/*
*      SUNXI_AIF2_ADCDAT_CTRL
*      AIF2 ADCDAT Control Register
*      AIF2_ADCDAT_CTRL:codecbase+0x284
*/
#define AIF2_ADCL_EN                   			(15)
#define AIF2_ADCR_EN                   			(14)
#define AIF2_ADCL_SRC                  			(10)
#define AIF2_ADCR_SRC                  			(8)
#define AIF2_ADCP_ENA                  			(3)
#define AIF2_ADUL_ENA                  			(2)
#define AIF2_LOOP_EN                   			(0)

/*
*      SUNXI_AIF2_DACDAT_CTRL
*      AIF2 DACDAT Control Register
*      AIF2_DACDAT_CTRL:codecbase+0x288
*/
#define AIF2_DACL_ENA                  			(15)
#define AIF2_DACR_ENA                  			(14)
#define AIF2_DACL_SRC                  			(10)
#define AIF2_DACR_SRC                  			(8)
#define AIF2_DACP_ENA                  			(3)
#define AIF2_DAUL_ENA                  			(2)

/*
*      SUNXI_AIF2_MXR_SRC
*      AIF2 Digital Mixer Source Select Register
*      AIF2_MXR_SRC:codecbase+0x28c
*/
#define AIF2_ADCL_MXR_SRC_AIF1DA0L             	(15)
#define AIF2_ADCL_MXR_SRC_AIF1DA1L             	(14)
#define AIF2_ADCL_MXR_SRC_AIF2DACR             	(13)
#define AIF2_ADCL_MXR_SRC_ADCL         			(12)
#define AIF2_ADCL_MXR_SRC              			(12)
#define AIF2_ADCR_MXR_SRC_AIF1DA0R             	(11)
#define AIF2_ADCR_MXR_SRC_AIF1DA1R             	(10)
#define AIF2_ADCR_MXR_SRC_AIF2DACL             	(9)
#define AIF2_ADCR_MXR_SRC_ADCR         			(8)
#define AIF2_ADCR_MXR_SRC              			(8)

/*
*      SUNXI_AIF2_VOL_CTRL1
*      AIF2 Volume Control 1 Register
*      AIF2_VOL_CTRL1:codecbase+0x290
*/
#define AIF2_ADCL_VOL                  			(8)
#define AIF2_ADCR_VOL                  			(0)

/*
*      SUNXI_AIF2_VOL_CTRL2
*      AIF2 Volume Control 2 Register
*      AIF2_VOL_CTRL2:codecbase+0x298
*/
#define AIF2_DACL_VOL                  			(8)
#define AIF2_DACR_VOL                  			(0)

/*
*      SUNXI_AIF2_MXR_GAIN
*      AIF2 Digital Mixer Gain Control Register
*      AIF2_MXR_GAIN:codecbase+0x2A0
*/
#define AIF2_ADCL_MXR_GAIN             			(12)
#define AIF2_ADCR_MXR_GAIN             			(8)

/*
*      AIF2 Receiver Data Discarding Control Register
*      AIF2_RXD_CTRL:codecbase+0x2A4
*/
#define AIF2_RXD_CTRL_DISCARD  					(8)

/*
*      SUNXI_AIF3_CLK_CTRL
*      AIF3 BCLK/LRCK Control Register
*      AIF3_CLK_CTRL:codecbase+0x2c0
*/
#define AIF3_BCLK_INV                  			(14)
#define AIF3_LRCK_INV                  			(13)
#define AIF3_WORD_SIZ                  			(4)
#define AIF3_CLOC_SRC                  			(0)

/*
*      AIF3 ADCDAT Control Register
*      AIF3_ADCDAT_CTRL:codecbase+0x2c4
*/
#define AIF3_ADCP_ENA                  			(3)
#define AIF3_ADUL_ENA                  			(2)

/*
*      SUNXI_AIF3_DACDAT_CTRL
*      AIF3 DACDAT Control Register
*      AIF3_DACDAT_CTRL:codecbase+0x2c8
*/
#define AIF3_DACP_ENA                  			(3)
#define AIF3_DAUL_ENA                  			(2)
#define AIF3_LOOP_ENA                  			(0)

/*
*      SUNXI_AIF3_SGP_CTRL
*      AIF3 Signal Path Control Register
*      AIF3_SGP_CTRL:codecbase+0x2cc
*/
#define AIF3_ADC_SRC                   			(10)
#define AIF2_DAC_SRC                   			(8)
#define AIF3_PINS_TRI                  			(7)
#define AIF3_ADCDAT_SRC                        	(4)
#define AIF2_ADCDAT_SRC                        	(3)
#define AIF2_DACDAT_SRC                        	(2)
#define AIF1_ADCDAT_SRC                        	(1)
#define AIF1_DACDAT_SRC                        	(0)

/*
*      AIF3 Receiver Data Discarding Control Register
*      AIF3_RXD_CTRL:codecbase+0x2e4
*/
#define AIF3_RXD_CTRL_DISCARD  					(8)

/*
*      SUNXI_ADC_DIG_CTRL
*      ADC Digital Control Register
*      ADC_DIG_CTRL:codecbase+0x300
*/
#define ENAD                                   	(15)
#define ENDM                                   	(14)
#define ADFIR32                                 (13)
#define ADOUT_DTS                              	(2)
#define ADOUT_DLY                              	(1)

/*
*      SUNXI_ADC_VOL_CTRL
*      ADC Volume Control Register
*      ADC_VOL_CTRL:codecbase+0x304
*/
#define ADC_VOL_L                              	(8)
#define ADC_VOL_R                              	(0)

/*
*      ADC Debug Control Register
*      ADC_DBG_CTRL:codecbase+0x308
*/
#define ADSW                                   	(15)
#define ADDA_DIGITAL_ANALOG_DBG        			(0)

/*
*	HMIC_CTRL1
*	HMIC Control 1 Register
*	SUNXI_HMIC_CTRL1:codecbase+0x310
*/
#define HMIC_M									(12)
#define HMIC_N									(8)
#define MDATA_THRESHOLD_DEBOUNCE				(5)
//#define JACK_IN_IRQ_EN							(4)
//#define JACK_OUT_IRQ_EN							(3)
#define MIC_DET_IRQ_EN							(0)

/*
*	HMIC_CTRL2
*	HMIC Control 2 Register
*	SUNXI_HMIC_CTRL2:codecbase+0x314
*/
#define HMIC_SAMPLE_SELECT						(14)
#define MDATA_THRESHOLD							(8)
#define HMIC_SF									(6)

/*
*	HMIC_STS
*	HMIC Status Register
*	SUNXI_HMIC_STS:codecbase+0x318
*/
#define MDATA_THRESHOLD_EN						(15)
#define MDATA_DISCARD							(13)
#define HMIC_DATA								(8)
//#define JACK_DET_OUT_ST							(4)
//#define JACK_DET_IIN_ST							(3)
//#define JACK_DET_OIRQ							(3)
#define MIC_DET_ST								(0)

/*
*      SUNXI_DAC_DIG_CTRL
*      DAC Digital Control Register
*      DAC_DIG_CTRL:codecbase+0x320
*/
#define ENDA                                   	(15)
#define ENHPF                                  	(14)
#define DAFIR32                                 (13)
#define MODQU                                  	(8)

/*
*      SUNXI_DAC_VOL_CTRL
*      DAC Volume Control Register
*      DAC_VOL_CTRL:codecbase+0x324
*/
#define DAC_VOL_L                              	(8)
#define DAC_VOL_R                              	(0)

/*
*      SUNXI_DAC_DBG_CTRL
*      DAC Debug Control Register
*      DAC_DBG_CTRL:codecbase+0x32c
*/
#define DASW                                   	(15)
#define ENDWA_N                                 (14)
#define DAC_MOD_DBG                            	(13)
#define DAC_PTN_SEL                            	(6)
#define DVC                                     (0)

/*
*      SUNXI_DAC_MXR_SRC
*      DAC Digital Mixer Source Select Register
*      DAC_MXR_SRC:codecbase+0x330
*/
#define DACL_MXR_SRC_AIF1DA0L                  	(15)
#define DACL_MXR_SRC_AIF1DA1L                  	(14)
#define DACL_MXR_SRC_AIF2DACL                  	(13)
#define DACL_MXR_SRC_ADCL                      	(12)
#define DACL_MXR_SRC                   			(12)

#define DACR_MXR_SRC_AIF1DA0R                  	(11)
#define DACR_MXR_SRC_AIF1DA1R                  	(10)
#define DACR_MXR_SRC_AIF2DACR                  	(9)
#define DACR_MXR_SRC_ADCR                      	(8)
#define DACR_MXR_SRC                   			(8)

/*
*      SUNXI_DAC_MXR_GAIN
*      DAC Digital Mixer Gain Control Register
*      DAC_MXR_GAIN:codecbase+0x334
*/
#define DACL_MXR_GAIN                  			(12)
#define DACR_MXR_GAIN                  			(8)

/*
*      ADC DAP Left Status Register
*      AC_ADC_DAPLSTA:codecbase+0x400
*/
#define LEFT_AGC_SAT_FLAG              			(9)
#define LEFT_AGC_N_THRESH_FLAG 					(8)
#define LEFT_GAIN_BY_AGC               			(0)

/*
*      ADC DAP Right Status Register
*      AC_ADC_DAPRSTA:codecbase+0x404
*/
#define RIGHT_AGC_SAT_FLAG             			(9)
#define RIGHT_AGC_N_THRESH_FLAG        			(8)
#define RIGHT_GAIN_BY_AGC              			(0)

/*
*      ADC DAP Left Channel Control Register
*      AC_ADC_DAPLCTRL:codecbase+0x408
*/
#define LEFT_AGC_EN                            	(14)
#define LEFT_HPF_EN                            	(13)
#define LEFT_NOISE_DETECT_EN   					(12)
#define LEFT_HYSTERESIS_SET            			(8)
#define LEFT_NOISE_DEB_TIME            			(4)
#define LEFT_SIGNAL_DEB_TIME   					(0)

/*
*      ADC DAP Right Channel Control Register
*      AC_ADC_DAPRCTRL:codecbase+0x40C
*/
#define RIGHT_AGC_EN                   (14)
#define RIGHT_HPF_EN                   (13)
#define RIGHT_NOISE_DETECT_EN  (12)
#define RIGHT_HYSTERESIS_SET   (8)
#define RIGHT_NOISE_DEB_TIME   (4)
#define RIGHT_SIGNAL_DEB_TIME  (0)

/*
*      ADC DAP Left Target Level Register
*      AC_ADC_DAPLTL:codecbase+0x410
*/
#define LEFT_CHAN_TAR_LEV_SET  (8)
#define LEFT_CHAN_MAX_GAIN_SET         (0)

/*
*      ADC DAP Right Target Level Register
*      AC_ADC_DAPRTL:codecbase+0x414
*/
#define RIGHT_CHAN_TAR_LEV_SET (8)
#define RIGHT_CHAN_MAX_GAIN_SET        (0)

/*
*      ADC DAP Left High Average Coef Register
*      AC_ADC_DAPLHAC:codecbase+0x418
*/
#define LEFT_CHAN_OUT_H_SIG_AVE_LEV (0)

/*
*      ADC DAP Left Low Average Coef Register
*      AC_ADC_DAPLLAC:codecbase+0x41c
*/
#define LEFT_CHAN_OUT_L_SIG_AVE_LEV (0)

/*
*      ADC DAP Right High Average Coef Register
*      AC_ADC_DAPRHAC:codecbase+0x420
*/
#define RIGHT_CHAN_OUT_H_SIG_AVE_LEV (0)

/*
*      ADC DAP Right Low Average Coef Register
*      AC_ADC_DAPRLAC:codecbase+0x424
*/
#define RIGHT_CHAN_OUT_L_SIG_AVE_LEV (0)

/*
*      ADC DAP Left Decay Time Register
*      AC_ADC_DAPLDT:codecbase+0x428
*/
#define LEFT_DEC_TIME_COEFF_SET        (0)

/*
*      ADC DAP Left Attack Time Register
*      AC_ADC_DAPLAT:codecbase+0x42c
*/
#define LEFT_ATTACK_TIME_COEFF_SET     (0)

/*
*      ADC DAP Right Decay Time Register
*      AC_ADC_DAPRDT:codecbase+0x430
*/
#define RIGHT_DEC_TIME_COEFF_SET       (0)

/*
*      ADC DAP Right Attack Time Register
*      AC_ADC_DAPRAT:codecbase+0x434
*/
#define RIGHT_ATTACK_TIME_COEFF_SET (0)

/*
*      ADC DAP Noise Threshold Register
*      AC_ADC_DAPNTH:codecbase+0x438
*/
#define LEFT_CHAN_NOISE_THRES_SET      (8)
#define RIGHT_CHAN_NOISE_THRES_SET     (0)

/*
*      ADC DAP Left Input Signal High Average Coef Register
*      AC_ADC_DAPLHNAC:codecbase+0x43c
*/
#define LEFT_INPUT_SIGNAL_H_AVE_FILT (0)

/*
*      ADC DAP Left Input Signal Low Average Coef Register
*      AC_ADC_DAPLLNAC:codecbase+0x440
*/
#define LEFT_INPUT_SIGNAL_L_AVE_FILT (0)

/*
*      ADC DAP Right Input Signal High Average Coef Register
*      AC_ADC_DAPRHNAC:codecbase+0x444
*/
#define RIGHT_INPUT_SIGNAL_H_AVE_FILT (0)

/*
*      ADC DAP Right Input Signal Low Average Coef Register
*      AC_ADC_DAPRLNAC:codecbase+0x448
*/
#define RIGHT_INPUT_SIGNAL_L_AVE_FILT (0)

/*
*      ADC DAP High HPF Coef Register
*      AC_DAPHHPFC:codecbase+0x44c
*/
#define HPF_H_COEFFICIENT_SET          (0)

/*
*      ADC DAP Low HPF Coef Register
*      AC_DAPLHPFC:codecbase+0x450
*/
#define HPF_L_COEFFICIENT_SET          (0)

/*
*      ADC DAP Optimum Register
*      AC_DAPOPT:codecbase+0x454
*/
#define LEFT_ENERGY_VAL_SET                    	(10)
#define LEFT_CHAN_GAIN_HYSTER_SET              	(8)
#define INPUT_SIGNAL_AVE_FILT_COEF_SET 			(5)
#define AGC_OUTPUT_CHAN_NOISE_STATE            	(4)
#define RIGHT_ENERGY_VAL_SET                   	(2)
#define RIGHT_CHAN_GAIN_HYSTER_SET             	(0)

/*
*      DAC DAP Control Register
*      AC_DAC_DAPCTRL:codecbase+0x480
*/
#define DRC1_EN                                 (6)
#define DRC1_LEFT_CHAN_HPF_EN                  	(5)
#define DRC1_RIGHT_CHAN_HPF_EN                  (4)
#define DRC0_EN                                 (2)
#define DRC0_LEFT_CHAN_HPF_EN                  	(1)
#define DRC0_RIGHT_CHAN_HPF_EN                  (0)

/*
*      AGC Enable Register
*      AGC_ENA:codecbase+0x4D0
*/
#define AIF1_AD0L_AGC_ENA              (15)
#define AIF1_AD0R_AGC_ENA              (14)
#define AIF1_AD1L_AGC_ENA              (13)
#define AIF1_AD1R_AGC_ENA              (12)
#define AIF2_ADCL_AGC_ENA              (11)
#define AIF2_ADCR_AGC_ENA              (10)
#define AIF2_DACL_AGC_ENA              (9)
#define AIF2_DACR_AGC_ENA              (8)
#define ADCL_AGC_ENA                   (7)
#define ADCR_AGC_ENA                   (6)

/*
*      DRC Enable Register
*      DRC_ENA:codecbase+0x4D4
*/
#define AIF1_DAC0_DRC0_ENA              	(15)
#define AIF1_DAC1_DRC0_ENA              	(14)
#define AIF2_DAC0_DRC0_ENA              	(13)
#define DAC_DRC0_ENA              			(12)
#define AIF1_DAC0_DRC1_ENA               	(7)
#define AIF1_ADC1_DRC1_ENA                  (6)
#define AIF2_ADC1_DRC1_ENA                  (5)
#define ADC_DRC1_ENA              			(4)

/*
*      SRC bist control Register
*      SRC_BISTCR:codecbase+0x4D8
*/
#define SRC1_2_SRAM_REG_SEL            	(13)
#define SRC1_2_SRAM_ADDR_MODE_SEL      	(12)
#define SRC1_2_SRAM_WR_DATA_PATTEN     	(9)
#define SRC1_2_SRAM_BIST_EN            	(8)
#define SRC2_ROM_CHECKSUM_ERR  			(7)
#define SRC2_ROM_CHECKXOR_ERR  			(6)
#define SRC2_ROM_BIST_BUSY             	(5)
#define SRC2_ROM_BIST_EN               	(4)
#define SRC1_ROM_CHECKSUM_ERR  			(3)
#define SRC1_ROM_CEHCKXOR_ERR  			(2)
#define SRC1_ROM_BIST_BUSY             	(1)
#define SRC1_ROM_BIST_EN               	(0)

/*
*      SRC bist Status Register
*      SRC_BISTST:codecbase+0x4DC
*/
#define SRC2_SRAM_BIST_ERR_STATUS      	(15)
#define SRC2_SRAM_BIST_ERR_PATTEN      	(12)
#define SRC2_SRAM_BIST_ERR_CYCLES      	(10)
#define SRC2_SRAM_BIST_STOP             (9)
#define SRC2_SRAM_BIST_BUSY             (8)
#define SRC1_SRAM_BIST_ERR_STATUS      	(7)
#define SRC1_SRAM_BIST_ERR_PATTEN      	(4)
#define SRC1_SRAM_BIST_ERR_CYCLES      	(2)
#define SRC1_SRAM_BIST_STOP             (1)
#define SRC1_SRAM_BIST_BUSY             (0)

/*
*      SRC1 control 1 Register
*      SRC1_CTRL1:codecbase+0x4E0
*/
#define SRC1_RATI_ENA                          (15)
#define SRC1_LOCK_STS                          (14)
#define SRC1_FIFO_OVR                          (13)
#define SRC1_FIFO_LEV                          (10)
#define SRC1_RATI_SET                          (0)

/*
*      SRC1 control 2 Register
*      SRC1_CTRL2:codecbase+0x4E4
*/
#define SRC1_RATI_STET                         (0)

/*
*      SRC1 control 3 Register
*      SRC1_CTRL3:codecbase+0x4E8
*/
#define SRC1_FIFO_LEV                          (10)
#define SRC1_RATI_VAL                          (0)

/*
*      SRC1 control 4 Register
*      SRC1_CTRL4:codecbase+0x4EC
*/
#define SRC1_RATI_VAL                          (0)

/*
*      SRC2 control 1 Register
*      SRC2_CTRL1:codecbase+0x4f0
*/
#define SRC2_RATI_EN                           (15)
#define SRC2_LOCK_STS                          (14)
#define SRC2_FIFO_OVR                          (13)
#define SRC2_FIFO_LEV                          (10)
#define SRC2_RATI_SEL                          (0)

/*
*      SRC2 control 2 Register
*      SRC2_CTRL2:codecbase+0x4f4
*/
#define SRC2_RATI_SEL                          (0)

/*
*      SRC2 control 3 Register
*      SRC2_CTRL3:codecbase+0x4f8
*/
#define SRC2_FIFO_LEV                          (10)
#define SRC2_RATI_VAL                          (0)

/*
*      SRC2 control 4 Register
*      SRC2_CTRL4:codecbase+0x4fc
*/
#define SRC2_RATI_VAL                          (0)

/*
*      DRC0 High HPF Coef Register
*      AC_DRC0_HHPFC:codecbase+0x600
*/
#define DRC0_HHPFC_COEF_SET	                    (0)

/*
*      DRC0 Low HPF Coef Register
*      AC_DRC0_LHPFC:codecbase+0x604
*/
#define DRC0_LHPFC_COEF_SET	                    (0)

/*
*      DRC0 Control Register
*      AC_DRC0_CTRL:codecbase+0x608
*/
#define DRC0_CTRL_COMPLETE	                    (15)
#define DRC0_CTRL_SIGNAL_DEL_TIMESET			(8)
#define DRC0_CTRL_DELAY_USE_BUF					(7)
#define DRC0_CTRL_GAIN_MAXLIM_EN				(6)
#define DRC0_CTRL_GAIN_MINLIM_EN				(5)
#define DRC0_CTRL_CONTROL_DRC_EN				(4)
#define DRC0_CTRL_SIGNAL_FUN_SEL				(3)
#define DRC0_CTRL_DEL_FUN_EN					(2)
#define DRC0_CTRL_DRC_LT_EN						(1)
#define DRC0_CTRL_DRC_ET_EN						(0)

/*
*      DRC0 Left Peak Filter High Attack Time Coef Register
*      AC_DRC0_LPFHAT:codecbase+0x60c
*/
#define DRC0_LPFHAT_ATT_TIME_PARA_SET			(0)

/*
*      DRC0 Left Peak Filter Low Attack Time Coef Register
*      AC_DRC0_LPFLAT:codecbase+0x610
*/
#define DRC0_LPFLAT_ATT_TIME_PARA_SET			(0)

/*
*      DRC0 Right Peak Filter High Attack Time Coef Register
*      AC_DRC0_RPFHAT:codecbase+0x614
*/
#define DRC0_RPFHAT_ATT_TIME_PARA_SET			(0)

/*
*      DRC0 Right Peak Filter Low Attack Time Coef Register
*      AC_DRC0_RPFLAT:codecbase+0x618
*/
#define DRC0_RPFLAT_ATT_TIME_PARA_SET			(0)

/*
*      DRC0 Left Peak Filter High Release Time Coef Register
*      AC_DRC0_LPFHRT:codecbase+0x61c
*/
#define DRC0_LPFHRT_REL_TIME_PARA_SET			(0)

/*
*      DRC0 Left Peak Filter Low Release Time Coef Register
*      AC_DRC0_LPFLRT:codecbase+0x620
*/
#define DRC0_LPFLRT_REL_TIME_PARA_SET			(0)

/*
*      DRC0 Right Peak Filter High Release Time Coef Register
*      AC_DRC0_RPFHRT:codecbase+0x624
*/
#define DRC0_RPFHRT_REL_TIME_PARA_SET			(0)

/*
*      DRC0 Left Peak Filter Low Release Time Coef Register
*      AC_DRC0_RPFLRT:codecbase+0x628
*/
#define DRC0_RPFLRT_REL_TIME_PARA_SET			(0)

/*
*      DRC0 Left RMS Filter High Coef Register
*      AC_DRC0_LRMSHAT:codecbase+0x62c
*/
#define DRC0_LRMSHAT_AVE_TIME_PARA_SET			(0)

/*
*      DRC0 Left RMS Filter Low Coef Register
*      AC_DRC0_LRMSLAT:codecbase+0x630
*/
#define DRC0_LRMSHAT_AVE_TIME_PARA_SET			(0)

/*
*      DRC0 Right RMS Filter High Coef Register
*      AC_DRC0_RRMSHAT:codecbase+0x634
*/
#define DRC0_RRMSHAT_AVE_TIME_PARA_SET			(0)

/*
*      DRC0 Right RMS Filter Low Coef Register
*      AC_DRC0_RRMSLAT:codecbase+0x638
*/
#define DRC0_RRMSLAT_AVE_TIME_PARA_SET			(0)

/*
*      DRC0 Compressor Theshold High Setting Register
*      AC_DRC0_HCT:codecbase+0x63c
*/
#define DRC0_HCT_COMP_THRES_SET			(0)

/*
*      DRC0 Compressor Theshold Low Setting Register
*      AC_DRC0_LCT:codecbase+0x640
*/
#define DRC0_LCT_COMP_THRES_SET			(0)

/*
*      DRC0 Compressor Slope High Setting Register
*      AC_DRC0_HKC:codecbase+0x644
*/
#define DRC0_HKC_SLOPE_SET			(0)

/*
*      DRC0 Compressor Slope Low Setting Register
*      AC_DRC0_LKC:codecbase+0x648
*/
#define DRC0_LKC_SLOPE_SET			(0)

/*
*      DRC0 Compressor High Output at Compressor Threshold Register
*      AC_DRC0_HOPC:codecbase+0x64c
*/
#define DRC0_HOPC_COMP_OUT			(0)

/*
*      DRC0 Compressor Low Output at Compressor Threshold Register
*      AC_DRC0_LOPC:codecbase+0x650
*/
#define DRC0_LOPC_COMP_OUT			(0)

/*
*      DRC0 Limiter Threshold High Setting Register
*      AC_DRC0_HLT:codecbase+0x654
*/
#define DRC0_HLT_LIM_THRES_SET			(0)

/*
*      DRC0 Limiter Threshold Low Setting Register
*      AC_DRC0_LLT:codecbase+0x658
*/
#define DRC0_LLT_LIM_THRES_SET			(0)

/*
*      DRC0 Limiter Slope High Setting Register
*      AC_DRC0_HKI:codecbase+0x65c
*/
#define DRC0_HKI_LIM_SLOPE_SET			(0)

/*
*      DRC0 Limiter Slope Low Setting Register
*      AC_DRC0_LKI:codecbase+0x660
*/
#define DRC0_LKI_LIM_SLOPE_SET			(0)

/*
*      DRC0 Limiter High Output at Limiter Threshold
*      AC_DRC0_HOPL:codecbase+0x664
*/
#define DRC0_HOPL_LIM_THRES_OUT			(0)

/*
*      DRC0 Limiter Low Output at Limiter Threshold
*      AC_DRC0_LOPL:codecbase+0x668
*/
#define DRC0_LOPL_LIM_THRES_OUT			(0)

/*
*      DRC0 Expander Theshold High Setting Register
*      AC_DRC0_HET:codecbase+0x66c
*/
#define DRC0_HET_EXPAN_THRES_SET			(0)

/*
*      DRC0 Expander Theshold Low Setting Register
*      AC_DRC0_LET:codecbase+0x670
*/
#define DRC0_LET_EXPAN_THRES_SET			(0)

/*
*      DRC0 Expander Slope High Setting Register
*      AC_DRC0_HKE:codecbase+0x674
*/
#define DRC0_HKE_EXPAN_SLOPE_SET			(0)

/*
*      DRC0 Expander Slope Low Setting Register
*      AC_DRC0_LKE:codecbase+0x678
*/
#define DRC0_LKE_EXPAN_SLOPE_SET			(0)

/*
*      DRC0 Expander High Output at Expander Threshold
*      AC_DRC0_HOPE:codecbase+0x67c
*/
#define DRC0_HOPE_EXPAN_DET_EQU			(0)

/*
*      DRC0 Expander Low Output at Expander Threshold
*      AC_DRC0_LOPE:codecbase+0x680
*/
#define DRC0_LOPE_EXPAN_DET_EQU			(0)

/*
*      DRC0 Linear Slope High Setting Register
*      AC_DRC0_HKN:codecbase+0x684
*/
#define DRC0_HKN_SLOPE_LIN_DET_EQU			(0)

/*
*      DRC0 Linear Slope Low Setting Register
*      AC_DRC0_LKN:codecbase+0x688
*/
#define DRC0_LKN_SLOPE_LIN_DET_EQU			(0)

/*
*      DRC0 Smooth filter Gain High Attack Time Coef Register
*      AC_DRC0_SFHAT:codecbase+0x68c
*/
#define DRC0_SFHAT_ATT_TIME_PARAM_SET		(0)

/*
*      DRC0 Smooth filter Gain Low Attack Time Coef Register
*      AC_DRC0_SFLAT:codecbase+0x690
*/
#define DRC0_SFLAT_ATT_TIME_PARAM_SET		(0)

/*
*      DRC0 Smooth filter Gain High Release Time Coef Register
*      AC_DRC0_SFHRT:codecbase+0x694
*/
#define DRC0_SFHRT_REL_TIME_PARAM_SET		(0)

/*
*      DRC0 Smooth filter Gain Low Release Time Coef Register
*      AC_DRC0_SFLRT:codecbase+0x698
*/
#define DRC0_SFLRT_REL_TIME_PARAM_SET		(0)

/*
*      DRC0 MAX Gain High Setting Register
*      AC_DRC0_MXGHS:codecbase+0x69c
*/
#define DRC0_MXGHS_GAIN_SET_DET_EUQ		(0)

/*
*      DRC0 MAX Gain Low Setting Register
*      AC_DRC0_MXGLS:codecbase+0x6A0
*/
#define DRC0_MXGLS_GAIN_SET_DET_EUQ		(0)

/*
*      DRC0 Min Gain High Setting Register
*      AC_DRC0_MNGHS:codecbase+0x6A4
*/
#define DRC0_MNGHS_GAIN_SET_DET_EUQ		(0)

/*
*      DRC0 Min Gain Low Setting Register
*      AC_DRC0_MNGHS:codecbase+0x6A8
*/
#define DRC0_MNGLS_GAIN_SET_DET_EUQ		(0)

/*
*      DRC0 Expander Smooth Time High Coef Register
*      AC_DRC0_EPSHC:codecbase+0x6AC
*/
#define DRC0_EPSHC_GAIN_FILT_REL_ATT_PARA (0)

/*
*      DRC0 Expander Smooth Time Low Coef Register
*      AC_DRC0_EPSLC:codecbase+0x6B0
*/
#define DRC0_EPSLC_GAIN_FILT_REL_ATT_PARA (0)

/*
*      DRC0 Optimum Register
*      AC_DRC0_OPT:codecbase+0x6B4
*/
#define DRC0_OPT_GS_EXP_COEFF_USE_SEL	 	(10)
#define DRC0_OPT_GS_COEFF_MOD_SEL	 		(9)
#define DRC0_OPT_MIN_ENERGY			 		(8)
#define DRC0_OPT_RMS_DET_MOD				(7)
#define DRC0_OPT_DATA_OUTPUT				(6)
#define DRC0_OPT_GAIN_DEFAULT_VAL			(5)
#define DRC0_OPT_HYS_GAIN_SMOOTH_DEL_TIME	(0)

/*
*      DRC0 HPF Gain High Coef Register
*      AC_DRC0_HPFHGAIN:codecbase+0x6B8
*/
#define DRC0_HPFHGAIN_GAIN_HPF_COEFF_SET	(0)

/*
*      DRC0 HPF Gain Low Coef Register
*      AC_DRC0_HPFLGAIN:codecbase+0x6Bc
*/
#define DRC0_HPFLGAIN_GAIN_HPF_COEFF_SET	(0)

/*
*      DRC1 High HPF Coef Register
*      AC_DRC1_HHPFC:codecbase+0x700
*/
#define DRC1_HHPFC_COEF_SET	(0)

/*
*      DRC1 Low HPF Coef Register
*      AC_DRC1_LHPFC:codecbase+0x704
*/
#define DRC1_LHPFC_COEF_SET	                    (0)

/*
*      DRC1 Control Register
*      AC_DRC1_CTRL:codecbase+0x708
*/
#define DRC1_CTRL_COMPLETE	                    (15)
#define DRC1_CTRL_SIGNAL_DEL_TIMESET			(8)
#define DRC1_CTRL_DELAY_USE_BUF					(7)
#define DRC1_CTRL_GAIN_MAXLIM_EN				(6)
#define DRC1_CTRL_GAIN_MINLIM_EN				(5)
#define DRC1_CTRL_CONTROL_DRC_EN				(4)
#define DRC1_CTRL_SIGNAL_FUN_SEL				(3)
#define DRC1_CTRL_DEL_FUN_EN					(2)
#define DRC1_CTRL_DRC_LT_EN						(1)
#define DRC1_CTRL_DRC_ET_EN						(0)

/*
*      DRC1 Left Peak Filter High Attack Time Coef Register
*      AC_DRC1_LPFHAT:codecbase+0x70c
*/
#define DRC1_LPFHAT_ATT_TIME_PARA_SET			(0)

/*
*      DRC1 Left Peak Filter Low Attack Time Coef Register
*      AC_DRC1_LPFLAT:codecbase+0x710
*/
#define DRC1_LPFLAT_ATT_TIME_PARA_SET			(0)

/*
*      DRC1 Right Peak Filter High Attack Time Coef Register
*      AC_DRC1_RPFHAT:codecbase+0x714
*/
#define DRC1_RPFHAT_ATT_TIME_PARA_SET			(0)

/*
*      DRC1 Right Peak Filter Low Attack Time Coef Register
*      AC_DRC1_RPFLAT:codecbase+0x718
*/
#define DRC1_RPFLAT_ATT_TIME_PARA_SET			(0)

/*
*      DRC1 Left Peak Filter High Release Time Coef Register
*      AC_DRC1_LPFHRT:codecbase+0x71c
*/
#define DRC7_LPFHRT_REL_TIME_PARA_SET			(0)

/*
*      DRC1 Left Peak Filter Low Release Time Coef Register
*      AC_DRC1_LPFLRT:codecbase+0x720
*/
#define DRC1_LPFLRT_REL_TIME_PARA_SET			(0)

/*
*      DRC1 Right Peak Filter High Release Time Coef Register
*      AC_DRC1_RPFHRT:codecbase+0x724
*/
#define DRC1_RPFHRT_REL_TIME_PARA_SET			(0)

/*
*      DRC1 Left Peak Filter Low Release Time Coef Register
*      AC_DRC1_RPFLRT:codecbase+0x728
*/
#define DRC1_RPFLRT_REL_TIME_PARA_SET			(0)

/*
*      DRC1 Left RMS Filter High Coef Register
*      AC_DRC1_LRMSHAT:codecbase+0x72c
*/
#define DRC1_LRMSHAT_AVE_TIME_PARA_SET			(0)

/*
*      DRC1 Left RMS Filter Low Coef Register
*      AC_DRC1_LRMSLAT:codecbase+0x730
*/
#define DRC1_LRMSHAT_AVE_TIME_PARA_SET			(0)

/*
*      DRC1 Right RMS Filter High Coef Register
*      AC_DRC1_RRMSHAT:codecbase+0x734
*/
#define DRC1_RRMSHAT_AVE_TIME_PARA_SET			(0)

/*
*      DRC1 Right RMS Filter Low Coef Register
*      AC_DRC1_RRMSLAT:codecbase+0x738
*/
#define DRC1_RRMSLAT_AVE_TIME_PARA_SET			(0)

/*
*      DRC1 Compressor Theshold High Setting Register
*      AC_DRC1_HCT:codecbase+0x73c
*/
#define DRC1_HCT_COMP_THRES_SET			(0)

/*
*      DRC1 Compressor Theshold Low Setting Register
*      AC_DRC1_LCT:codecbase+0x740
*/
#define DRC1_LCT_COMP_THRES_SET			(0)

/*
*      DRC1 Compressor Slope High Setting Register
*      AC_DRC1_HKC:codecbase+0x744
*/
#define DRC1_HKC_SLOPE_SET			(0)

/*
*      DRC1 Compressor Slope Low Setting Register
*      AC_DRC1_LKC:codecbase+0x748
*/
#define DRC1_LKC_SLOPE_SET			(0)

/*
*      DRC1 Compressor High Output at Compressor Threshold Register
*      AC_DRC1_HOPC:codecbase+0x74c
*/
#define DRC1_HOPC_COMP_OUT			(0)

/*
*      DRC1 Compressor Low Output at Compressor Threshold Register
*      AC_DRC1_LOPC:codecbase+0x750
*/
#define DRC1_LOPC_COMP_OUT			(0)

/*
*      DRC1 Limiter Threshold High Setting Register
*      AC_DRC1_HLT:codecbase+0x754
*/
#define DRC1_HLT_LIM_THRES_SET			(0)

/*
*      DRC1 Limiter Threshold Low Setting Register
*      AC_DRC1_LLT:codecbase+0x758
*/
#define DRC1_LLT_LIM_THRES_SET			(0)

/*
*      DRC1 Limiter Slope High Setting Register
*      AC_DRC1_HKI:codecbase+0x75c
*/
#define DRC1_HKI_LIM_SLOPE_SET			(0)

/*
*      DRC1 Limiter Slope Low Setting Register
*      AC_DRC1_LKI:codecbase+0x760
*/
#define DRC1_LKI_LIM_SLOPE_SET			(0)

/*
*      DRC1 Limiter High Output at Limiter Threshold
*      AC_DRC1_HOPL:codecbase+0x764
*/
#define DRC1_HOPL_LIM_THRES_OUT			(0)

/*
*      DRC1 Limiter Low Output at Limiter Threshold
*      AC_DRC1_LOPL:codecbase+0x768
*/
#define DRC1_LOPL_LIM_THRES_OUT			(0)

/*
*      DRC1 Expander Theshold High Setting Register
*      AC_DRC1_HET:codecbase+0x76c
*/
#define DRC1_HET_EXPAN_THRES_SET			(0)

/*
*      DRC1 Expander Theshold Low Setting Register
*      AC_DRC1_LET:codecbase+0x770
*/
#define DRC1_LET_EXPAN_THRES_SET			(0)

/*
*      DRC1 Expander Slope High Setting Register
*      AC_DRC1_HKE:codecbase+0x774
*/
#define DRC1_HKE_EXPAN_SLOPE_SET			(0)

/*
*      DRC1 Expander Slope Low Setting Register
*      AC_DRC1_LKE:codecbase+0x778
*/
#define DRC1_LKE_EXPAN_SLOPE_SET			(0)

/*
*      DRC1 Expander High Output at Expander Threshold
*      AC_DRC1_HOPE:codecbase+0x77c
*/
#define DRC1_HOPE_EXPAN_DET_EQU			(0)

/*
*      DRC1 Expander Low Output at Expander Threshold
*      AC_DRC1_LOPE:codecbase+0x780
*/
#define DRC1_LOPE_EXPAN_DET_EQU			(0)

/*
*      DRC1 Linear Slope High Setting Register
*      AC_DRC1_HKN:codecbase+0x784
*/
#define DRC1_HKN_SLOPE_LIN_DET_EQU			(0)

/*
*      DRC1 Linear Slope Low Setting Register
*      AC_DRC1_LKN:codecbase+0x788
*/
#define DRC1_LKN_SLOPE_LIN_DET_EQU			(0)

/*
*      DRC1 Smooth filter Gain High Attack Time Coef Register
*      AC_DRC1_SFHAT:codecbase+0x78c
*/
#define DRC1_SFHAT_ATT_TIME_PARAM_SET		(0)

/*
*      DRC1 Smooth filter Gain Low Attack Time Coef Register
*      AC_DRC1_SFLAT:codecbase+0x790
*/
#define DRC0_SFLAT_ATT_TIME_PARAM_SET		(0)

/*
*      DRC1 Smooth filter Gain High Release Time Coef Register
*      AC_DRC1_SFHRT:codecbase+0x794
*/
#define DRC1_SFHRT_REL_TIME_PARAM_SET		(0)

/*
*      DRC1 Smooth filter Gain Low Release Time Coef Register
*      AC_DRC1_SFLRT:codecbase+0x798
*/
#define DRC1_SFLRT_REL_TIME_PARAM_SET		(0)

/*
*      DRC1 MAX Gain High Setting Register
*      AC_DRC1_MXGHS:codecbase+0x79c
*/
#define DRC0_MXGHS_GAIN_SET_DET_EUQ		(0)

/*
*      DRC1 MAX Gain Low Setting Register
*      AC_DRC1_MXGLS:codecbase+0x7A0
*/
#define DRC1_MXGLS_GAIN_SET_DET_EUQ		(0)

/*
*      DRC1 Min Gain High Setting Register
*      AC_DRC1_MNGHS:codecbase+0x7A4
*/
#define DRC1_MNGHS_GAIN_SET_DET_EUQ		(0)

/*
*      DRC1 Min Gain Low Setting Register
*      AC_DRC1_MNGHS:codecbase+0x7A8
*/
#define DRC1_MNGLS_GAIN_SET_DET_EUQ		(0)

/*
*      DRC1 Expander Smooth Time High Coef Register
*      AC_DRC1_EPSHC:codecbase+0x7AC
*/
#define DRC1_EPSHC_GAIN_FILT_REL_ATT_PARA (0)

/*
*      DRC1 Expander Smooth Time Low Coef Register
*      AC_DRC1_EPSLC:codecbase+0x7B0
*/
#define DRC1_EPSLC_GAIN_FILT_REL_ATT_PARA (0)

/*
*      DRC1 Optimum Register
*      AC_DRC1_OPT:codecbase+0x7B4
*/
#define DRC1_OPT_GS_EXP_COEFF_USE_SEL	 	(10)
#define DRC1_OPT_GS_COEFF_MOD_SEL	 		(9)
#define DRC1_OPT_MIN_ENERGY			 		(8)
#define DRC1_OPT_RMS_DET_MOD				(7)
#define DRC1_OPT_DATA_OUTPUT				(6)
#define DRC1_OPT_GAIN_DEFAULT_VAL			(5)
#define DRC1_OPT_HYS_GAIN_SMOOTH_DEL_TIME	(0)

/*
*      DRC1 HPF Gain High Coef Register
*      AC_DRC1_HPFHGAIN:codecbase+0x7B8
*/
#define DRC0_HPFHGAIN_GAIN_HPF_COEFF_SET	(0)

/*
*      DRC1 HPF Gain Low Coef Register
*      AC_DRC1_HPFLGAIN:codecbase+0x7Bc
*/
#define DRC1_HPFLGAIN_GAIN_HPF_COEFF_SET	(0)


/*Codec Analog Register*/
#define HP_CTRL						(0x00)
#define OL_MIX_CTRL					(0x01)
#define OR_MIX_CTRL					(0x02)
#define EARPIECE_CTRL0				(0x03)
#define EARPIECE_CTRL1				(0x04)
#define SPKOUT_CTRL0				(0x05)
#define SPKOUT_CTRL1				(0x06)
#define MIC1_CTRL					(0x07)
#define MIC2_CTRL					(0x08)
#define LINEIN_CTRL					(0x09)
#define MIX_DAC_CTRL				(0x0a)
#define L_ADCMIX_SRC				(0x0b)
#define R_ADCMIX_SRC				(0x0c)
#define ADC_CTRL					(0x0d)
#define HS_MBIAS_CTRL				(0x0e)
#define APT_REG						(0x0f)
#define OP_BIAS_CTRL0				(0x10)
#define OP_BIAS_CTRL1				(0x11)
#define ZC_VOL_CTRL					(0x12)
#define BIAS_CAL_DATA				(0x13)
#define BIAS_CAL_SET				(0x14)
#define BD_CAL_CTRL					(0x15)
#define HP_PA_CTRL					(0x16)
#define HP_CAL_CTRL					(0x17)
#define RHP_CAL_DAT					(0x18)
#define RHP_CAL_SET					(0x19)
#define LHP_CAL_DAT					(0x1a)
#define LHP_CAL_SET					(0x1b)
#define MDET_CTRL					(0x1c)
#define JACK_MIC_CTRL				(0x1d)
#define PHONEOUT_CTRL				(0x1E)

/*
*      apb0 base
*      0x00 HP_CTRL
*/
#define PA_CLK_GATE             (7)
#define HPPA_EN					(6)
#define HPVOL                  	(0)

/*
*      apb0 base
*      0x01 OL_MIX_CTRL
*/
#define LMIXMUTE                           	(0)
#define LMIXMUTEDACR                     	(0)
#define LMIXMUTEDACL                     	(1)
#define LMIXMUTELINEINL                     (2)
#define LMIXMUTEPHONEP                    	(3)
#define LMIXMUTEPHONEPN                     (4)
#define LMIXMUTEMIC2BOOST                	(5)
#define LMIXMUTEMIC1BOOST                	(6)

/*
*      apb0 base
*      0x02 OR_MIX_CTRL
*/
#define RMIXMUTE                            (0)
#define RMIXMUTEDACL                     	(0)
#define RMIXMUTEDACR                     	(1)
#define RMIXMUTELINEINR                     (2)
#define LMIXMUTEPHONEN                    	(3)
#define LMIXMUTEPHONENP                     (4)
#define RMIXMUTEMIC2BOOST                	(5)
#define RMIXMUTEMIC1BOOST                	(6)

/*
*      apb0 base
*      0x03 EARPIECE_CTRL0
*/
#define EAR_RAMP_TIME						(4)
#define ESPSR								(0)

/*
*      apb0 base
*      0x04 EARPIECE_CTRL1
*/
#define ESPPA_EN					(7)
#define ESPPA_MUTE					(6)
#define ESP_VOL						(0)

/*
*      apb0 base
*      0x05 SPKOUT_CTRL0
*/
#define SPKOUT_L_EN					(7)
#define SPKOUT_R_EN					(6)
#define LEFT_SPK_SRC_SEL			(5)
#define RIGHT_SPK_SRC_SEL			(4)

/*
*      apb0 base
*      0x06 SPKOUT_CTRL1
*/
#define SPKOUT_VOL                  (0)

/*
*      apb0 base
*      0x07 MIC1_CTRL
*/
#define MIC1G                  		(4)
#define MIC1AMPEN	                (3)
#define MIC1BOOST                   (0)

/*
*      apb0 base
*      0x08 MIC2_CTRL
*/
#define MIC2_SRC_SEL               	(7)
#define MIC2G                  		(4)
#define MIC2AMPEN	                (3)
#define MIC2BOOST                   (0)

/*
*      apb0 base
*      0x09 LINEIN_CTRL
*/
#define LINEING              		(0)

/*
*      apb0 base
*      0x0A MIX_DAC_CTRL
*/
#define DACAREN						(7)
#define DACALEN						(6)
#define RMIXEN						(5)
#define LMIXEN						(4)
#define RHPPAMUTE					(3)
#define LHPPAMUTE					(2)
#define RHPIS						(1)
#define LHPIS						(0)

/*
*      apb0 base
*      0x0B L_ADCMIX_SRC
*/
#define LADCMIXMUTE                     (0)
#define LADCMIXMUTEMIC1BOOST     		(6)
#define LADCMIXMUTEMIC2BOOST     		(5)

#define LADCMIXMUTEPHONEPN              (4)
#define LADCMIXMUTEPHONEP              (3)

#define LADCMIXMUTELINEINL              (2)
#define LADCMIXMUTELOUTPUT              (1)
#define LADCMIXMUTEROUTPUT              (0)

/*
*      apb0 base
*      0x0C R_ADCMIX_SRC
*/
#define RADCMIXMUTE                     (0)
#define RADCMIXMUTEMIC1BOOST     		(6)
#define RADCMIXMUTEMIC2BOOST     		(5)
#define LADCMIXMUTEPHONENP              (4)
#define LADCMIXMUTEPHONEN              (3)
#define RADCMIXMUTELINEINR              (2)
#define RADCMIXMUTEROUTPUT              (1)
#define RADCMIXMUTELOUTPUT              (0)

/*
*      apb0 base
*      0x0D ADC_CTRL
*/
#define ADCREN    						(7)
#define ADCLEN							(6)
#define ADCG							(0)

/*
*      apb0 base
*      0x0E HS_MBIAS_CTRL
*/
#define MMICBIASEN			            	(7)
#define MBIASSEL		                  	(5)
#define HBIASSEL		                    (0)

/*
*      apb0 base
*      0xF APT_REG
*/
#define MMIC_BIAS_CHOP_EN		        	(7)
#define MMIC_BIAS_CHOP_CLK_SEL	        	(5)
#define DITHER        						(4)
#define DITHER_CLK_SEL				        (2)
#define BIHE_CTRL					 		(0)

/*
*      apb0 base
*      0x10 OP_BIAS_CTRL0
*/
#define OPDRV_OPEAR_CUR 				(6)
#define OPADC1_BIAS_CUR  				(4)
#define OPADC2_BIAS_CUR 				(2)
#define OPAAF_BIAS_CUR 					(0)

/*
*      apb0 base
*      0x11 OP_BIAS_CTRL1
*/
#define OPMIC_BIAS_CUR					(6)
#define OPVR_BIAS_CUR					(4)
#define OPDAC_BIAS_CUR					(2)
#define OPMIX_BIAS_CUR					(0)

/*
*      apb0 base
*      0x12 ZC_VOL_CTRL
*/
#define ZERO_CROSS_EN                  	(6)
#define TIMEOUT_ZERO_CROSS_EN  			(4)
#define USB_BIAS_CUR                   	(0)

/*
*      apb0 base
*      0x13 BIAS_CAL_DATA
*/
#define BIASCALI						(0)

/*
*      apb0 base
*      0x14 BIAS_CAL_SET
*/
#define SELDETADCDY						(6)
#define BIASVERIFY						(0)

/*
*      apb0 base
*      0x15 BD_CAL_CTRL
*/
#define PA_SPEED_SELECT					(7)
#define CURRENT_TEST_SELECT				(6)
#define BIAS_CALI_MODE_SELECT			(2)
#define BIAS_HP_CALI_CTRL				(1)
#define BIASCALIVERIFY					(0)

/*
*      apb0 base
*      0x16 HP_PA_CTRL
*/
#define BUFFERENABLE					(7)
#define HPMUTENABLE						(6)
#define HPINPUTENABLE					(5)
#define HPOUTPUTENABLE					(4)
#define HPPA_DEL						(2)
#define CP_CLKS							(0)

/*
*      apb0 base
*      0x17 HP_CAL_CTRL
*/
#define HPCALIFIRST						(7)
#define HPCALIMODE						(5)
#define HPCALIVERIFY					(4)
#define HPCALICKS						(0)

/*
*      apb0 base
*      0x18 RHP_CAL_CTRL
*/
#define HPRCALI							(0)

/*
*      apb0 base
*      0x19 RHP_CAL_SET
*/
#define HPRCALIVERIFY					(0)

/*
*      apb0 base
*      0x1A LHP_CAL_DAT
*/
#define HPLCALI							(0)

/*
*      apb0 base
*      0x1B LHP_CAL_SET
*/
#define HPLCALIVERIFY					(0)

/*
*      apb0 base
*      0x1C MDET_CTRL
*/
#define SELDETADCFS						(4)
#define SELDETADCDB						(2)
#define SELDETADCBF						(0)

/*
*      apb0 base
*      0x1D JACK_MIC_CTRL
*/
#define JACKDETEN						(7)
#define INNERRESEN						(6)
#define HMICBIASEN						(5)
#define MICADCEN						(4)
#define POPFREE							(3)
#define AUTOPLEN						(1)
#define MICDETPL						(0)

/*
*	0X1E PHONEOUT_CTRL
*
*/
#define PHONEOUTGAIN						(5)
#define PHONEOUTEN						(4)
#define PHONEOUTS3						(3)
#define PHONEOUTS2						(2)
#define PHONEOUTS1						(1)
#define PHONEOUTS0						(0)


//physical address defination for audio codec(digital&analog) and clock control management module(CCMU)
#define CODEC_DIGITAL_ADDRESS_BASE 0x01C22C00
#define CODEC_DIGITAL_ADDRESS_SIZE 0x800

#define CODEC_ANALOG_SHADOW_ADDRES_BASE 0x01F015C0
#define CODEC_ANALOG_SHADOW_ADDRESS_SIZE 4

#define CODEC_CCMU_ADDRESS_BASE 0x01C20000
#define CODEC_CCMU_ADDRESS_SIZE 0x400

NTSTATUS AWCodecMapReg(void);
NTSTATUS AWCodecInitHw(void);
NTSTATUS AWCodecStateControl(_In_ BOOL IsCapture, _In_ KSSTATE State);


