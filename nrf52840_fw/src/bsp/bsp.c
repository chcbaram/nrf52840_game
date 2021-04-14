/*
 * bsp.c
 *
 *  Created on: Dec 6, 2020
 *      Author: baram
 */


#include "bsp.h"


volatile uint32_t systick_time = 0;


void SysTick_Handler(void)
{
  systick_time++;
}


void bspInit(void)
{
  nrf_systick_load_set(SystemCoreClock / 1000);
  nrf_systick_csr_set(
      NRF_SYSTICK_CSR_CLKSOURCE_CPU |
      NRF_SYSTICK_CSR_TICKINT_ENABLE |
      NRF_SYSTICK_CSR_ENABLE);
}

void delay(uint32_t ms)
{
#ifdef _USE_HW_RTOS
  if (xTaskGetSchedulerState() != taskSCHEDULER_NOT_STARTED)
  {
    osDelay(ms);
  }
  else
  {
    HAL_Delay(ms);
  }
#else
  uint32_t pre_time = systick_time;

  while(systick_time-pre_time < ms);
#endif
}

uint32_t millis(void)
{
  return systick_time;
}

