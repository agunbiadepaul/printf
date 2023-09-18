#include <stdio.h>
#include "main.h"

int main(void)
{
	char ch1 = 'X';
	char ch2 = '%';
	char *str = "Hello";

	int numb_of_chars_printed = _printf("Character for percentage: %%\nCharacter: %c\nString will print: %s\n", ch2, ch1, str);

	return (numb_of_chars_printed);
}
