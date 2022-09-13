#include "main.h"

/**
 * print_alphabet_x10 - print alphabet lower case 10 time.
 *
 * Return: Always 0;
 */
void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char alpha = 97;

		for (alpha = 97; alpha < 123; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		count++;
	}
}
