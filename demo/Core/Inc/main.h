/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */
extern uint32_t WriteAdress;
/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define FLASH_CS_Pin GPIO_PIN_1
#define FLASH_CS_GPIO_Port GPIOA
#define USB_TX_Pin GPIO_PIN_2
#define USB_TX_GPIO_Port GPIOA
#define USB_RX_Pin GPIO_PIN_3
#define USB_RX_GPIO_Port GPIOA
#define NB_RXD_Pin GPIO_PIN_10
#define NB_RXD_GPIO_Port GPIOB
#define NB_TXD_Pin GPIO_PIN_11
#define NB_TXD_GPIO_Port GPIOB
#define NB_PWRKEY_Pin GPIO_PIN_12
#define NB_PWRKEY_GPIO_Port GPIOB
#define NB_SWSIM_Pin GPIO_PIN_13
#define NB_SWSIM_GPIO_Port GPIOB
#define NB_PSMEINT_Pin GPIO_PIN_14
#define NB_PSMEINT_GPIO_Port GPIOB
#define NB_PWREN_Pin GPIO_PIN_15
#define NB_PWREN_GPIO_Port GPIOB
#define FIG_TOUCH_OUT_Pin GPIO_PIN_8
#define FIG_TOUCH_OUT_GPIO_Port GPIOA
#define FIG_TOUCH_OUT_EXTI_IRQn EXTI4_15_IRQn
#define FIG_UART_RX_Pin GPIO_PIN_9
#define FIG_UART_RX_GPIO_Port GPIOA
#define FIG_UART_TX_Pin GPIO_PIN_10
#define FIG_UART_TX_GPIO_Port GPIOA
#define FIG_PWREN_Pin GPIO_PIN_11
#define FIG_PWREN_GPIO_Port GPIOA
#define LED_RED_Pin GPIO_PIN_3
#define LED_RED_GPIO_Port GPIOB
#define LED_GREEN_Pin GPIO_PIN_4
#define LED_GREEN_GPIO_Port GPIOB
#define NB_RI_Pin GPIO_PIN_5
#define NB_RI_GPIO_Port GPIOB
#define POWER_ON_Pin GPIO_PIN_6
#define POWER_ON_GPIO_Port GPIOB
#define SW_DET_Pin GPIO_PIN_7
#define SW_DET_GPIO_Port GPIOB
#define SW_DET_EXTI_IRQn EXTI4_15_IRQn
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
