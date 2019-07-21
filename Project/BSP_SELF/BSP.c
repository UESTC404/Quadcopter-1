#include "includes.h"

void BSP_Init(void){
  SysTick_Init();
	
//	LED_INIT(GPIO_Pin_5,GPIO_Mode_OUT,GPIO_Speed_2MHz,GPIO_OType_PP,GPIO_PuPd_NOPULL);
//	TIM_LED_INIT();
	
	PWM_LED_INIT();
	
	uart_init(42,115200);
	PWM_OUT_INIT();
}

void SysTick_Init(void){
	RCC_ClocksTypeDef RCC_Clocks;
	RCC_GetClocksFreq(&RCC_Clocks);
	SysTick_Config(RCC_Clocks.SYSCLK_Frequency/OS_TICKS_PER_SEC);
}
