#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 97;
	char d = 65;

	while (c <= 122)
	{
		putchar(c);
		c++;
	}


	while (d <= 90)
	{
		putchar(d);
		d++;
	}
	printf("\n");
	return (0);
}
