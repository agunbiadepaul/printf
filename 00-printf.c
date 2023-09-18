#include "main.h"
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
		if (*format == '%' && format[1] != '\0')
		{
			format++;
			if (*format == 'c')
			{
				int c = va_arg(pcargs, int);

				write(1, &c, 1);
				numb_of_chars_printed++;
			}
			else if (*format == 's')
				print_string(pcargs, &numb_of_chars_printed);

			else if (*format == '%')
			{
				write(1, "%", 1);
				numb_of_chars_printed++;
			}
			else if (*format == 'd' || *format == 'i') /* print_int ftn call */
				print_int(pcargs, &numb_of_chars_printed);
			else
			{
				write(1, &(*format), 1);
				numb_of_chars_printed++;
			}
		}
		else
		{/* Regular character, write to the stdout */
			write(1, &(*format), 1);
			numb_of_chars_printed++;
		}
		format++; /* continue with the format string's following character */
	}
	va_end(pcargs);
	return (numb_of_chars_printed);
}
