#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int w;
	int x;
	int y;
	int z;

	for (w = 48; w <= 57; w++)
	{
		for (x = 48; x <= 57; x++)
		{
			for (y = 48; y <= 57; y++)
			{
				for (z = 48; z <= 57; z++)
				{
					if (((y + z) > (w + x) && y >= w) || w < y)
					{
						putchar(w);
						putchar(x);
						putchar(' ');
						putchar(y);
						putchar(z);

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
