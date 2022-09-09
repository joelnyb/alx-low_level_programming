#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z = 0;

	while (z < 10)
	{
		putchar((z) + '0');
		if (z == 9)
		{
			putchar('\n');
			break;
		}
		z = z + 1;
		putchar(',');
		putchar(' ');
	}
	return (0);
}
