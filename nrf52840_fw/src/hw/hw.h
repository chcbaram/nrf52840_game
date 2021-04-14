/*
 * hw.h
 *
 *  Created on: Dec 6, 2020
 *      Author: baram
 */

#ifndef SRC_HW_HW_H_
#define SRC_HW_HW_H_


#include "hw_def.h"


#include "led.h"
#include "uart.h"
#include "usb.h"
#include "rtc.h"
#include "reset.h"
#include "flash.h"
#include "cli.h"
#include "button.h"
#include "gpio.h"
#include "sd.h"
#include "fatfs.h"
#include "spi.h"
#include "lcd.h"
#include "mcp2515.h"
#include "i2c.h"
#include "i2s.h"
#include "files.h"
#include "eeprom.h"
#include "adc.h"
#include "esp.h"
#include "pwm.h"
#include "dxl.h"

void hwInit(void);


#endif /* SRC_HW_HW_H_ */
