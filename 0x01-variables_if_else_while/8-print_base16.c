#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char c = 97;

	while (i < 10)
	{
		putchar((i) + '0');
		i = i + 1;
	}
	while (c < 103)
	{
		putchar(c);
		c = c + 1;
	}
	putchar ('\n');
	return (0);
}
