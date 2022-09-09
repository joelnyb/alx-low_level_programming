#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char z = 122;

	while (z > 96)
	{
		putchar(z);
		z = z - 1;
	}
	putchar('\n');
	return (0);
}
