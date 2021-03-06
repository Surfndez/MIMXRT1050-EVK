/*

Copyright 2011-2018 Stratify Labs, Inc

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

*/

#ifndef CONFIG_H_
#define CONFIG_H_

#include <mcu/arch.h>

#include "board_config.h"

//openocd -f interface/stlink-v2-1.cfg -f target/stm32f4x_stlink.cfg


#define SOS_BOARD_SYSTEM_CLOCK 528000000
#define SOS_BOARD_SYSTEM_MEMORY_SIZE (1024*32)

#define SOS_BOARD_USB_RX_BUFFER_SIZE 512
#define SOS_BOARD_STDIO_BUFFER_SIZE 512
#define SOS_BOARD_TMR 1

//Total number of tasks (threads) for the entire system
#define SOS_BOARD_TASK_TOTAL 10
#define SOS_BOARD_EVENT_HANDLER board_event_handler
#define SOS_BOARD_TRACE_EVENT board_trace_event


#define SOS_BOARD_DEBUG_FLAGS (MCU_DEBUG_INFO | MCU_DEBUG_SYS)

//--------------------------------------------Symbols-------------------------------------------------

/* By defining Ignore switches, functions can be omitted from the kernel
 * This means any applications that use these functions will fail
 * to install on the BSP.
 * 
 * If you are building a custom board, ignoring symbols is a good
 * way to squeeze down the kernel to only what is necessary. However,
 * if you plan on allowing your users to install applications, they
 * might find it challenging when some functions are missing (the
 * applications will compile but fail to install).
 * 
 * See [sos/symbols/defines.h](https://github.com/StratifyLabs/StratifyOS/blob/master/include/sos/symbols/defines.h) 
 * for all available switches.
 * 
 */ 

#define SYMBOLS_IGNORE_DCOMPLEX 1
#define SYMBOLS_IGNORE_POSIX_TRACE 1 //Always ignore -- deprecated
#define SYMBOLS_IGNORE_SG 1 //Stratify Graphics -- ignore if board will not support displays
#define SYMBOLS_IGNORE_SOCKET 1
#define SYMBOLS_IGNORE_LWIP 1

//other ignore switches
#if 0
#define SYMBOLS_IGNORE_MATH_F 1
#define SYMBOLS_IGNORE_DOUBLE 1
#define SYMBOLS_IGNORE_STDIO_FILE 1
#define SYMBOLS_IGNORE_SIGNAL 1
#define SYMBOLS_IGNORE_PTHREAD_MUTEX 1
#define SYMBOLS_IGNORE_PTHREAD_COND 1
#define SYMBOLS_IGNORE_AIO 1
#define SYMBOLS_IGNORE_WCTYPE 1
#define SYMBOLS_IGNORE_STR 1
#define SYMBOLS_IGNORE_SEM 1
#define SYMBOLS_IGNORE_MQ 1
#endif

/* Uncomment to add ARM CMSIS DSP libraries to the BSP
 *
 * See [ARM CMSIS Declaration](https://github.com/StratifyLabs/StratifyOS-CMSIS/blob/master/arm_dsp_api_declaration.h)
 * for more detailed link configuration switches.
 *
 *
 */


//--------------------------------------------Hardware Pins-------------------------------------------------

#define SOS_BOARD_USART2_TX_PORT 3 //PD5
#define SOS_BOARD_USART2_TX_PIN 5
#define SOS_BOARD_USART2_RX_PORT 3 //PD6
#define SOS_BOARD_USART2_RX_PIN 6

#define SOS_BOARD_USART3_TX_PORT 3 //PD8
#define SOS_BOARD_USART3_TX_PIN 8
#define SOS_BOARD_USART3_RX_PORT 3 //PD9
#define SOS_BOARD_USART3_RX_PIN 9

#define SOS_BOARD_USART6_TX_PORT 6 //PG5
#define SOS_BOARD_USART6_TX_PIN 9
#define SOS_BOARD_USART6_RX_PORT 6 //PG14
#define SOS_BOARD_USART6_RX_PIN 14

#define SOS_BOARD_I2C1_SDA_PORT 1 //PB9
#define SOS_BOARD_I2C1_SDA_PIN 9
#define SOS_BOARD_I2C1_SCL_PORT 1 //PB8
#define SOS_BOARD_I2C1_SCL_PIN 8

#define SOS_BOARD_I2C2_SDA_PORT 5 //PF0
#define SOS_BOARD_I2C2_SDA_PIN 0
#define SOS_BOARD_I2C2_SCL_PORT 5 //PF1
#define SOS_BOARD_I2C2_SCL_PIN 1

#define SOS_BOARD_SPI1_MISO_PORT 0 //PA6
#define SOS_BOARD_SPI1_MISO_PIN 6
#define SOS_BOARD_SPI1_MOSI_PORT 0 //PA7
#define SOS_BOARD_SPI1_MOSI_PIN 7
#define SOS_BOARD_SPI1_SCK_PORT 0 //PA5
#define SOS_BOARD_SPI1_SCK_PIN 5
#define SOS_BOARD_SPI1_CS_PORT 0xff //Not used
#define SOS_BOARD_SPI1_CS_PIN 0xff

#define SOS_BOARD_SPI3_MISO_PORT 1 //PB4
#define SOS_BOARD_SPI3_MISO_PIN 4
#define SOS_BOARD_SPI3_MOSI_PORT 1 //PB5
#define SOS_BOARD_SPI3_MOSI_PIN 5
#define SOS_BOARD_SPI3_SCK_PORT 1  //PB3
#define SOS_BOARD_SPI3_SCK_PIN 3
#define SOS_BOARD_SPI3_CS_PORT 0xff //Not used
#define SOS_BOARD_SPI3_CS_PIN 0xff

#define SOS_BOARD_SPI1_RX_DMA STM32_DMA2
#define SOS_BOARD_SPI1_RX_DMA_STREAM 0
#define SOS_BOARD_SPI1_RX_DMA_CHANNEL 3
#define SOS_BOARD_SPI1_TX_DMA STM32_DMA2
#define SOS_BOARD_SPI1_TX_DMA_STREAM 3
#define SOS_BOARD_SPI1_TX_DMA_CHANNEL 3

#define SOS_BOARD_SPI3_RX_DMA STM32_DMA1
#define SOS_BOARD_SPI3_RX_DMA_STREAM 0
#define SOS_BOARD_SPI3_RX_DMA_CHANNEL 0
#define SOS_BOARD_SPI3_TX_DMA STM32_DMA1
#define SOS_BOARD_SPI3_TX_DMA_STREAM 5
#define SOS_BOARD_SPI3_TX_DMA_CHANNEL 0

#define SOS_BOARD_SD_DATA0_PORT 2 //PC8
#define SOS_BOARD_SD_DATA0_PIN 8
#define SOS_BOARD_SD_DATA1_PORT 2 //PC9
#define SOS_BOARD_SD_DATA1_PIN 9
#define SOS_BOARD_SD_DATA2_PORT 2 //PC10
#define SOS_BOARD_SD_DATA2_PIN 10
#define SOS_BOARD_SD_DATA3_PORT 2 //PC11
#define SOS_BOARD_SD_DATA3_PIN 11
#define SOS_BOARD_SD_CLK_PORT 2 //PC12
#define SOS_BOARD_SD_CLK_PIN 12
#define SOS_BOARD_SD_CMD_PORT 3 //PD2
#define SOS_BOARD_SD_CMD_PIN 2

//#define EXT_RAM_START (0x80000000)
#define EXT_RAM_PAGES (4*1024) //(32768) // = 32MB of RAM @ 1kb page size
#define APPFS_RAM_PAGES (EXT_RAM_PAGES / 2)
#define RAMDISK_OFFSET (APPFS_RAM_PAGES * MCU_RAM_PAGE_SIZE) // after appfs
#define RAMDISK_PAGES (EXT_RAM_PAGES - APPFS_RAM_PAGES) / 4 //FIXME: remove /4

/*
 * USB bulk won't accept more than endpoint size bytes at a time.
 * Link2 requires the USB bulk to handle multiple incoming
 * transfers at a time.
 *
 * The USB is high speed. So one way to improve could be to
 * use a 512 byte bulk endpoint. Now link uses 64 byte bulk endpoints.
 * Link1 uses 64 byte packets. Link2 uses 2048 byte packets. So
 * another protocol option (or flag is needed).
 *
 */
#define LINK_PROTOCOL 1


#endif /* CONFIG_H_ */
