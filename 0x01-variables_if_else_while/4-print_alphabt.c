#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 97;

	while (c < 123)
	{
		if (c == 101)
		{
			c = 102;
		}
		else if (c == 113)
		{
			c = 114;
		}
		putchar(c);
		c = c + 1;
	}
	printf("\n");
	return (0);
}
