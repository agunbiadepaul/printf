#include "main.h"
/**
 * print_string- function to print string,handling NULL case
 * @numb_of_chars_printed: pointer to count characters
 * @pcargs:va_list containing the arguments
 */

void print_string(va_list pcargs, int *numb_of_chars_printed)
{
	char *str = va_arg(pcargs, char *);

	if(!str)
		str = "(null)";

	while (*str)
	{
		write(1, str++, 1);
		(*numb_of_chars_printed)++;
	}
}
