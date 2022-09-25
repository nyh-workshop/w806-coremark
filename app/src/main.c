#include <stdio.h>
#include "wm_hal.h"
#include "coremark.h"

//#define MAIN_HAS_NOARGC

extern MAIN_RETURN_TYPE core_main(void);

void Error_Handler(void);

int main(void)
{
    SystemClock_Config(CPU_CLK_160M);
    printf("enter main\r\n");

    core_main();
    while(1);

}

void Error_Handler(void)
{
    while (1)
    {
    }
}

void assert_failed(uint8_t *file, uint32_t line)
{
    printf("Wrong parameters value: file %s on line %d\r\n", file, line);
}