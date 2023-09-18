<<<<<<< HEAD
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
=======
>>>>>>> 9aeaf3d831bd6ec4b61ae6aa7ae6a909888ba50b
#include "main.h"

/* Functions prototypes used */
int pc_putchar(int c);
int _print_string(char *str);

/**
 * _printf - Generates output in accordance with a format.
 * @format: Format specifiers in a character string.
 * Return: The number of characters (not including the null byte)
 * that were printed.
 */
int _printf(const char *format, ...)
{
	va_list pcargs;
	int numb_of_chars_printed = 0;

	va_start(pcargs, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++; /* pass the '%' now */

			switch (*format)
			{
<<<<<<< HEAD
				case 'c':
					numb_of_chars_printed += pc_putchar(va_arg(pcargs, int));
					break;

				case 's':
					{
						char *str = va_arg(pcargs, char *);

					if (str == NULL)
						str = "(null)";
					numb_of_chars_printed += _print_string(str);
					}
					break;

				case '%':
					numb_of_chars_printed += pc_putchar('%');
					break;

				case '\0':
					return (numb_of_chars_printed);

				default:
					numb_of_chars_printed += pc_putchar('%');
					numb_of_chars_printed += pc_putchar(*format);
					break;
=======
				write(1, "%", 1);
				numb_of_chars_printed++;
			}
			else if (*format == 'd' || *format == 'i')
			 /* Call the print_int function for 'd' or 'i' */
				print_int(pcargs, &numb_of_chars_printed);
			else
			{
				write(1, &(*format), 1);
				numb_of_chars_printed++;
>>>>>>> 9aeaf3d831bd6ec4b61ae6aa7ae6a909888ba50b
			}
		}
		else
		{
			numb_of_chars_printed += pc_putchar(*format);
		}
		format++;
	}

	va_end(pcargs);
	return (numb_of_chars_printed);
}

/**
 * _print_string - Print a string
 * @str: String that is to be printed.
 * Return: The number of characters printed
 */
int _print_string(char *str)
{
	int numb_of_chars_printed = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		numb_of_chars_printed += pc_putchar(*str);
		str++;
	}

	return (numb_of_chars_printed);
}

/**
 * pc_putchar - Custom putchar function for printing
 * @c: The character to be printed
 * Return: 1 as Successful
 */
int pc_putchar(int c)
{
	return (write(1, &c, 1));
}
