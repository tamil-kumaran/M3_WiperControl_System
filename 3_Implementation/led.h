#ifndef BLINKLED_H_
#define BLINKLED_H_

#include "stm32f4xx.h"
#include "stm32f4xx_hal.h"

// ----- LED definitions ------------------------------------------------------

#if defined(BOARD_OLIMEX_STM32_E407)

// STM32-E407 definitions (the GREEN led, C13, active low)

// Port numbers: 0=A, 1=B, 2=C, 3=D, 4=E, 5=F, 6=G, ...
#define BLINK_PORT_NUMBER               (2)
#define BLINK_PIN_NUMBER                (13)
#define BLINK_ACTIVE_LOW                (1)

#else

// STM32F4DISCOVERY definitions (the GREEN led, D12, active high)
// (SEGGER J-Link device name: STM32F407VG).

#define BLINK_PORT_NUMBER               (3)
#define BLINK_PIN_NUMBERG                (12) // Green LED
#define BLINK_PIN_NUMBERO                (13) // Orange LED
#define BLINK_PIN_NUMBERR                (14) // Red LED
#define BLINK_PIN_NUMBERB                (15) // Blue LED
#define BLINK_ACTIVE_LOW                (0)

#endif

#define BLINK_GPIOx(_N)                 ((GPIO_TypeDef *)(GPIOA_BASE + (GPIOB_BASE-GPIOA_BASE)*(_N)))
#define BLINK_PIN_MASK(_N)              (1 << (_N))
#define BLINK_RCC_MASKx(_N)             (RCC_AHB1ENR_GPIOAEN << (_N))

// ----------------------------------------------------------------------------

extern
void
blink_led_init(void);

// ----------------------------------------------------------------------------

void
blink_led_on(void);

void
blink_led_off(void);

// ----------------------------------------------------------------------------

// ----------------------------------------------------------------------------

#endif