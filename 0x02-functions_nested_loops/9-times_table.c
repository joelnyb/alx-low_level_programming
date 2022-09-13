#include "main.h"
/**
 * times_table - Entry
 *
 * Return: Always 0
 */
void times_table(void)
{
	int i, j, value;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			value = i * j;
			if (value < 10)
			{
				_putchar(value + '0');
				if (j == 9)
				{
					_putchar(' ');
					
				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (value > 9)
			{
				_putchar (value / 10 + '0');
				_putchar (value % 10 + '0');
				if (j == 9)
				{
					_putchar(' ');
					
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					
				}
			}

		}
		_putchar('\n');

		}
	}

