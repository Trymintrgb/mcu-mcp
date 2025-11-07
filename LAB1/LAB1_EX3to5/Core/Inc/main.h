/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2025 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

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
#define RED_H_Pin GPIO_PIN_1
#define RED_H_GPIO_Port GPIOA
#define YELLOW_H_Pin GPIO_PIN_2
#define YELLOW_H_GPIO_Port GPIOA
#define GREEN_H_Pin GPIO_PIN_3
#define GREEN_H_GPIO_Port GPIOA
#define RED_V_Pin GPIO_PIN_5
#define RED_V_GPIO_Port GPIOA
#define YELLOW_V_Pin GPIO_PIN_6
#define YELLOW_V_GPIO_Port GPIOA
#define GREEN_V_Pin GPIO_PIN_7
#define GREEN_V_GPIO_Port GPIOA
#define Display1_1_Pin GPIO_PIN_0
#define Display1_1_GPIO_Port GPIOB
#define Display1_2_Pin GPIO_PIN_1
#define Display1_2_GPIO_Port GPIOB
#define Display1_3_Pin GPIO_PIN_2
#define Display1_3_GPIO_Port GPIOB
#define Display2_4_Pin GPIO_PIN_10
#define Display2_4_GPIO_Port GPIOB
#define Display2_5_Pin GPIO_PIN_11
#define Display2_5_GPIO_Port GPIOB
#define Display2_6_Pin GPIO_PIN_12
#define Display2_6_GPIO_Port GPIOB
#define Display2_7_Pin GPIO_PIN_13
#define Display2_7_GPIO_Port GPIOB
#define Display1_4_Pin GPIO_PIN_3
#define Display1_4_GPIO_Port GPIOB
#define Display1_5_Pin GPIO_PIN_4
#define Display1_5_GPIO_Port GPIOB
#define Display1_6_Pin GPIO_PIN_5
#define Display1_6_GPIO_Port GPIOB
#define Display1_7_Pin GPIO_PIN_6
#define Display1_7_GPIO_Port GPIOB
#define Display2_1_Pin GPIO_PIN_7
#define Display2_1_GPIO_Port GPIOB
#define Display2_2_Pin GPIO_PIN_8
#define Display2_2_GPIO_Port GPIOB
#define Display2_3_Pin GPIO_PIN_9
#define Display2_3_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
