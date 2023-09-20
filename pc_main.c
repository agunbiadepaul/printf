#include <stdio.h>
#include "main.h"

int main(void)
{
    unsigned int u_num = 12345;
    unsigned int o_num = 0754;
    unsigned int x_num = 0x1A3;

    printf("main _printf:\n");

    _printf("Unsigned Integer (decimal): %u\n", u_num);
    _printf("Octal: %o\n", o_num);
    _printf("Hexadecimal (lowercase): %x\n", x_num);
    _printf("Hexadecimal (uppercase): %X\n", x_num);

    return (0);
}
