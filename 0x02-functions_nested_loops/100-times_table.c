#include "main.h"
/**
 * print_times_table - Prints N amount of table
 * @n: accepts integer number
 */
void print_times_table(int n)
{
	int i, j, value;

	if (n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				value = i * j;
				if (value > 9 && value <= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((value / 10) + '0');
					_putchar((value % 10) + '0');
				}
				else if (value >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((value / 100) + '0');
					_putchar(((value % 100) / 10) + '0');
					_putchar(((value % 100) % 10) + '0');
				}
				else
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(value + '0');
					}
					else
						_putchar(value + '0');
				}
			}
			_putchar('\n');
		}
	}
}
