#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int w = 0;
	int x = 0;
	int y = 0;
	int z = 1;

	for (w = 0; w < 10; w++)
	{
		for (x = 0; x < 10; x++)
		{
			for (y = 0; y < 10; y++)
			{
				for (z = 1; z < 10; z++)
				{
					if (((y + z) > (w + x) && y >= w) || w < y)
					{
						putchar((w) + '0');
						putchar((x) + '0');
						putchar(' ');
						putchar((y) + '0');
						putchar((z) + '0');

					if (w + x + y + z == 227 && w == 57)
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					}

				}
			}
		}
	}
	putchar('\n');
	return (0);
}
