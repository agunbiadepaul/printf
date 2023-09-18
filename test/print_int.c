#include "main.h"
/**
 * print_int - Print an integer using _printf
 * @args: The va_list containing the integer argument
 * @printed_chars: Pointer to the count of printed characters
 */
void print_int(va_list args, int *printed_chars)
{
	int n = va_arg(args, int); /* Assuming the argument is int */
	char buffer[20]; /*  Assuming a reasonable buffer size */
	int len = 0;
	int is_negative = 0;
	int num_length = 0;
        unsigned long int temp = n;
	int i;

	if (n < 0)
	{ /*Handle the case of a negative number */
		is_negative = 1;
		n = -n;
	}
	do	{
		num_length++;
		temp /= 10;
	}	while (temp > 0);
	/* Convert the integer to a string */
	do	{
		buffer[len++] = (n % 10) + '0';
		n /= 10;
	} while (n > 0);
	/* If the number was negative, add the minus sign */
	if (is_negative)
	{
		buffer[len++] = '-';
	}

	/* Print the characters in reverse order */
	for (i = len - 1; i >= 0; i--)
	{
		write(1, &buffer[i], 1);
		(*printed_chars)++;
	}
}
