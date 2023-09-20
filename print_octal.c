#include "main.h"

/**
 * print_octal - Print an output of unsigned interger type.
 * @n: The unsigned integer to be printed.
 * @numb_of_chars_printed: A pointer to an integer to
 * store numbers of printed character.
 * Description: Print unsigned int 'n' and update number of character printed
 */
void print_octal(unsigned int n, int *numb_of_chars_printed)
{
	char buffer[32];
	int i, j;

	if (n == 0)
	{
		write(1, "0", 1);
		(*numb_of_chars_printed)++;
		return;
	}

	for (i = 0; n > 0; i++)
	{
		buffer[i] = (n % 8) + '0';
		n /= 8;
	}

	for (j = i - 1; j >= 0; j--)
	{
		write(1, &buffer[j], 1);
		(*numb_of_chars_printed)++;
	}
}
