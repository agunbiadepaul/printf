#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int _printf(const char *format, ...);
<<<<<<< HEAD
int _print_string(char *str);
int pc_putchar(int c);
=======
void print_int(va_list args, int *printed_chars);
>>>>>>> 9aeaf3d831bd6ec4b61ae6aa7ae6a909888ba50b

#endif /* _MAIN_H_ */
