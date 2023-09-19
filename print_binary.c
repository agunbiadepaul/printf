#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints unsigned integer in binary form
 * @n: The unsigned integer that will print binary.
 * @numb_of_chars_printed: A pointer that points to a character count
 */
void print_binary(unsigned int n, int *numb_of_chars_printed)
{
	char binary_buffer[32];/* Assume its a 32-bit integer */
	int i, j;

	if (n == 0)
	{
		write(1, "0", 1);
		(*numb_of_chars_printed)++;
		return;
	}

	for (i = 0; n > 0; i++)
	{
		binary_buffer[i] = (n % 2) + '0';
		n /= 2;
	}

	for (j = i - 1; j >= 0; j--)
	{
		write(1, &binary_buffer[j], 1);
		(*numb_of_chars_printed)++;
	}
}
