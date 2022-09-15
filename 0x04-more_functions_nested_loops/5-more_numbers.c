#include "main.h"

/**
 * more_numbers - prints numbers
 * @void: takes no argument or paramter
 * Return: Always 0
 */
void more_numbers(void)
{
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(i + '0');

		}
		_putchar('\n');
	}
	_putchar('\n');
}
