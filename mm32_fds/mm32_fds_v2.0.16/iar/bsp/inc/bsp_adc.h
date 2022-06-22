////////////////////////////////////////////////////////////////////////////////
/// @file     BSP_ADC.H
/// @author   Y Shi
/// @version  v2.0.0
/// @date     2019-03-13
/// @brief    THIS FILE CONTAINS ALL THE FUNCTIONS PROTOTYPES FOR THE ADC
///           BSP LAYER.
////////////////////////////////////////////////////////////////////////////////
/// @attention
///
/// THE EXISTING FIRMWARE IS ONLY FOR REFERENCE, WHICH IS DESIGNED TO PROVIDE
/// CUSTOMERS WITH CODING INFORMATION ABOUT THEIR PRODUCTS SO THEY CAN SAVE
/// TIME. THEREFORE, MINDMOTION SHALL NOT BE LIABLE FOR ANY DIRECT, INDIRECT OR
/// CONSEQUENTIAL DAMAGES ABOUT ANY CLAIMS ARISING OUT OF THE CONTENT OF SUCH
/// HARDWARE AND/OR THE USE OF THE CODING INFORMATION CONTAINED HEREIN IN
/// CONNECTION WITH PRODUCTS MADE BY CUSTOMERS.
///
/// <H2><CENTER>&COPY; COPYRIGHT 2018-2019 MINDMOTION </CENTER></H2>
////////////////////////////////////////////////////////////////////////////////

// Define to prevent recursive inclusion  --------------------------------------
#ifndef __BSP_ADC_H
#define __BSP_ADC_H

////////////////////////////////////////////////////////////////////////////////
/// @addtogroup MM32_Board_Support_Package
/// @{

////////////////////////////////////////////////////////////////////////////////
/// @defgroup ADC_BSP
/// @brief ADC BSP modules
/// @{


////////////////////////////////////////////////////////////////////////////////
/// @defgroup ADC_Exported_Types
/// @{

/// @}

////////////////////////////////////////////////////////////////////////////////
/// @defgroup ADC_Exported_Variables
/// @{
#ifdef _BSP_ADC_C_
#define GLOBAL

#else
#define GLOBAL extern


#endif


#undef GLOBAL
/// @}

////////////////////////////////////////////////////////////////////////////////
/// @defgroup ADC_Exported_Functions
/// @{

void BSP_ADC_GPIO_Configure(ADC_TypeDef* ADCx, u32 chs);

/// @}


/// @}

/// @}


////////////////////////////////////////////////////////////////////////////////
#endif /*__BSP_ADC_H */
////////////////////////////////////////////////////////////////////////////////
