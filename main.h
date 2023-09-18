#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _print_string(char *str);
int pc_putchar(int c);
void print_int(va_list args, int *printed_chars);

#endif /* _MAIN_H_ */
