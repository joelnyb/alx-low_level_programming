#include "main.h"

/**
 * more_numbers - prints numbers
 * @void: takes no argument or paramter
 * Return: Always 0
 */
void new_line(void);
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			else
			{
			_putchar(j + '0');
			}

		}
		new_line();
	}
}
/**
 * new_line - new line
 * @void: no input
 * Return: Always 0
 */
void new_line(void)
{
	_putchar('\n');
}
