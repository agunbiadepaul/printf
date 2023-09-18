#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
void print_int(va_list args, int *printed_chars);

#endif /* _MAIN_H_ */
