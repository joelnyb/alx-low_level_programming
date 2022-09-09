#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar((a) + '0');
		a = a + 1;
	}
	putchar('\n');
	return (0);
}
