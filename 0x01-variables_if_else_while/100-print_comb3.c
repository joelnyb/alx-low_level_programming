#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	int y = 1;

	int x = 0;

	for (x = 0; x < 10; x++)
	{
		for (y = 1; y < 10; y++)
		{
			if (x < y)
			{
				putchar((x) + '0');
				putchar((y) + '0');
				if (x == 8 && y == 9)
				{
					putchar('\n');
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
