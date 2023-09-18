#include "main.h"
/**
 * _printf - Generates output in accordance with a format.
 * @format: Format specifiers in a character string.
 * Return: The number of characters (not including the null byte)
 * that were printed.
 */
int _printf(const char *format, ...);
int _printf(const char *format, ...)
{
	va_list pcargs;
	int numb_of_chars_printed = 0;
	int len = 0;

	va_start(pcargs, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++; /* pass the '%' now */
			if (*format == '\0')
				break;
			if (*format == 'c')
			{
				char c = va_arg(pcargs, int); /* char becomes an int */

				write(1, &c, 1);
				numb_of_chars_printed++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(pcargs, char *);

				if (str == NULL)
					str = "(null)";
				while (str[len])
					len++;
				write(1, str, len);
				numb_of_chars_printed++;
			}
			else if (*format == '%')
			{
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
