#include "main.h"

/**
 * print_times_table - Prints N amount of table
 * @n: accepts integer number
 *
 * Return: Always 0
 */
void print_times_table(int n)
{
	int i, j, value;

	n = n + 1;

	if (n <= 15)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				value = i * j;
				if (value <= 9)
				{
					_putchar(value + '0');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else if (value > 9 && value <= 100)
				{
					_putchar((value / 10) + '0');
					_putchar((value % 10) + '0');
					_putchar(' ');
					_putchar(' ');
				}
				else if (value >= 100 && value <= 256)
				{
					_putchar((value / 100) + '0');
					_putchar(((value % 100) / 10) + '0');
					_putchar(((value % 100) % 10) + '0');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
