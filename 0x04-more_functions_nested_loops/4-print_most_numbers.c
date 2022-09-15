#include "main.h"
/**
 * print_most_numbers - prints numbers that do not contain 2 and 4
 * @void: not input parameter or argumets
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i + '0');
	}
	_putchar(i + '0');
}
