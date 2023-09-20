#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

void print_string(va_list pcargs, int *numb_of_chars_printed);
int _printf(const char *format, ...);
void print_int(va_list args, int *printed_chars);
void print_binary(unsigned int n, int *numb_of_chars_printed);
void print_uint(unsigned int n, int *numb_of_chars_printed);
void print_octal(unsigned int n, int *numb_of_chars_printed);
void print_hex(unsigned int n, int uppercase, int *numb_of_chars_printed);

#endif /* _MAIN_H_ */
