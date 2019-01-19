/**
  ******************************************************************************
  * @file    Project/STM32F4xx_StdPeriph_Templates/main.c 
  * @author  MCD Application Team
  * @version V1.4.0
  * @date    04-August-2014
  * @brief   Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2014 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
**/

#include "stm32f4xx.h"

void GPIO_Configuration(void);
void Delay(__IO uint32_t nCount);



int main(void)
{
	GPIO_Configuration();
	

  while (1)
   {
		GPIO_ResetBits(GPIOA,GPIO_Pin_0);
//		GPIO_ResetBits(GPIOC,GPIO_Pin_1);
//		GPIO_ResetBits(GPIOC,GPIO_Pin_2);
//		GPIO_ResetBits(GPIOC,GPIO_Pin_3);
//		GPIO_SetBits(GPIOC,GPIO_Pin_2);
//		GPIO_SetBits(GPIOC,GPIO_Pin_1);
		GPIO_SetBits(GPIOC,GPIO_Pin_2);
//		GPIO_SetBits(GPIOC,GPIO_Pin_3);
//		GPIO_SetBits(GPIOC,GPIO_Pin_4);
//		GPIO_SetBits(GPIOC,GPIO_Pin_5);
//		GPIO_SetBits(GPIOC,GPIO_Pin_6);
//		GPIO_SetBits(GPIOC,GPIO_Pin_7);
		Delay(0x0fffff);
//		GPIO_ResetBits(GPIOC,GPIO_Pin_2);
//		GPIO_ResetBits(GPIOC,GPIO_Pin_1);
//		GPIO_ResetBits(GPIOC,GPIO_Pin_2);
//		GPIO_ResetBits(GPIOC,GPIO_Pin_3);
//		Delay(0x00fff);
//		GPIO_ResetBits(GPIOC,GPIO_Pin_2);
//		GPIO_SetBits(GPIOC,GPIO_Pin_1);
//		Delay(0xffffff);
		GPIO_ResetBits(GPIOC,GPIO_Pin_2);
		Delay(0x0fffff);
		
   }
}

void GPIO_Configuration(void)
{
	
	GPIO_InitTypeDef  GPIO_InitStructure;
  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);

	//PC0 PC1 PC2 PC3 PC4 PC5 PC6 PC7
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0 | GPIO_Pin_1| GPIO_Pin_2;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;
	GPIO_Init(GPIOA, &GPIO_InitStructure);	
}

void Delay(__IO uint32_t nCount)	 //简单的延时函数
{
	for(; nCount != 0; nCount--);
}


