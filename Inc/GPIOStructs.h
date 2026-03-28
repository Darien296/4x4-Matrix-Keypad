#ifndef GPIOSTRUCTS_H_
#define GPIOSTRUCTS_H_

#include <stdint.h>

#if defined(__BYTE_ORDER__) && (__BYTE_ORDER__ == __ORDER_BIG_ENDIAN__)

typedef struct {
    uint32_t Reserved4 : 1;
    uint32_t OTGHSULPI : 1;
    uint32_t OTGHS     : 1;
    uint32_t ETHMACPTP : 1;
    uint32_t EHTMACRX  : 1;
    uint32_t ETHMACTX  : 1;
    uint32_t ETHMAC    : 1;
    uint32_t Reserved3 : 2;
    uint32_t DMA2      : 1;
    uint32_t DMA1      : 1;
    uint32_t CMDATARAM : 1;
    uint32_t BKPSRAM   : 1;
    uint32_t Reserved2 : 5;
    uint32_t CRC       : 1;
    uint32_t Reserved1 : 3;
    uint32_t GPIOI     : 1;
    uint32_t GPIOH     : 1;
    uint32_t GPIOG     : 1;
    uint32_t GPIOF     : 1;
    uint32_t GPIOE     : 1;
    uint32_t GPIOD     : 1;
    uint32_t GPIOC     : 1;
    uint32_t GPIOB     : 1;
    uint32_t GPIOA     : 1;
} RCC_AHB1ENR_t;

typedef struct {
    uint32_t MODER15 : 2;
    uint32_t MODER14 : 2;
    uint32_t MODER13 : 2;
    uint32_t MODER12 : 2;
    uint32_t MODER11 : 2;
    uint32_t MODER10 : 2;
    uint32_t MODER9  : 2;
    uint32_t MODER8  : 2;
    uint32_t MODER7  : 2;
    uint32_t MODER6  : 2;
    uint32_t MODER5  : 2;
    uint32_t MODER4  : 2;
    uint32_t MODER3  : 2;
    uint32_t MODER2  : 2;
    uint32_t MODER1  : 2;
    uint32_t MODER0  : 2;
} GPIOx_MODER_t;

typedef struct {
    uint32_t Reserved : 16;
    uint32_t ODR15    : 1;
    uint32_t ODR14    : 1;
    uint32_t ODR13    : 1;
    uint32_t ODR12    : 1;
    uint32_t ODR11    : 1;
    uint32_t ODR10    : 1;
    uint32_t ODR9     : 1;
    uint32_t ODR8     : 1;
    uint32_t ODR7     : 1;
    uint32_t ODR6     : 1;
    uint32_t ODR5     : 1;
    uint32_t ODR4     : 1;
    uint32_t ODR3     : 1;
    uint32_t ODR2     : 1;
    uint32_t ODR1     : 1;
    uint32_t ODR0     : 1;
} GPIOx_ODR_t;

#elif defined(__BYTE_ORDER__) && (__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__)

typedef struct {
    uint32_t GPIOA     : 1;
    uint32_t GPIOB     : 1;
    uint32_t GPIOC     : 1;
    uint32_t GPIOD     : 1;
    uint32_t GPIOE     : 1;
    uint32_t GPIOF     : 1;
    uint32_t GPIOG     : 1;
    uint32_t GPIOH     : 1;
    uint32_t GPIOI     : 1;
    uint32_t Reserved1 : 3;
    uint32_t CRC       : 1;
    uint32_t Reserved2 : 5;
    uint32_t BKPSRAM   : 1;
    uint32_t CMDATARAM : 1;
    uint32_t DMA1      : 1;
    uint32_t DMA2      : 1;
    uint32_t Reserved3 : 2;
    uint32_t ETHMAC    : 1;
    uint32_t ETHMACTX  : 1;
    uint32_t EHTMACRX  : 1;
    uint32_t ETHMACPTP : 1;
    uint32_t OTGHS     : 1;
    uint32_t OTGHSULPI : 1;
    uint32_t Reserved4 : 1;
} RCC_AHB1ENR_t;

typedef struct {
    uint32_t MODER0  : 2;
    uint32_t MODER1  : 2;
    uint32_t MODER2  : 2;
    uint32_t MODER3  : 2;
    uint32_t MODER4  : 2;
    uint32_t MODER5  : 2;
    uint32_t MODER6  : 2;
    uint32_t MODER7  : 2;
    uint32_t MODER8  : 2;
    uint32_t MODER9  : 2;
    uint32_t MODER10 : 2;
    uint32_t MODER11 : 2;
    uint32_t MODER12 : 2;
    uint32_t MODER13 : 2;
    uint32_t MODER14 : 2;
    uint32_t MODER15 : 2;
} GPIOx_MODER_t;

typedef struct {
    uint32_t ODR0     : 1;
    uint32_t ODR1     : 1;
    uint32_t ODR2     : 1;
    uint32_t ODR3     : 1;
    uint32_t ODR4     : 1;
    uint32_t ODR5     : 1;
    uint32_t ODR6     : 1;
    uint32_t ODR7     : 1;
    uint32_t ODR8     : 1;
    uint32_t ODR9     : 1;
    uint32_t ODR10    : 1;
    uint32_t ODR11    : 1;
    uint32_t ODR12    : 1;
    uint32_t ODR13    : 1;
    uint32_t ODR14    : 1;
    uint32_t ODR15    : 1;
    uint32_t Reserved : 16;
} GPIOx_ODR_t;

#else
    #error "Unknown or unsupported endianness!"
#endif

#endif /* GPIOSTRUCTS_H_ */
