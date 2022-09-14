#include "main.h"
/**
 * times_table - Entry
 *
 * Return: Always 0
 */
void times_table(void)
{
	int x, y, value;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');
		for (y = 1; y <= 9; y++)
		{
			_putchar(',');
			_putchar(' ');
			value = x * y;
			if (value <= 9)
			{
				_putchar(' ');
			}
			else

				_putchar((value / 10) + '0');

			_putchar((value % 10) + '0');

		}
		_putchar('\n');
	}
}

