#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int x = 0;
	int y = 1;
	int z = 2;

	for (x = 0; x < 10; x++)
	{
		for (y = 1; y < 10; y++)
		{
			for (z = 2; z < 10; z++)
			{
				if (x < y && y < z)
				{
					putchar((x) + '0');
					putchar((y) + '0');
					putchar((z) + '0');
					if (x == 7 && y == 8 && z == 9)
					{
						putchar('\n');
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
