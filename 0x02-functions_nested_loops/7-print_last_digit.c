#include "main.h"

/**
 * print_last_digit - check the code
 *@n: inputs digit to display last digiet number
 *
 * Return: Always 0;
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		n = n % 10;
		_putchar(n + '0');
	}
	else
	{
		n = n * -1;
		n = n % 10;
		_putchar(n + '0');
	}
	return 0;
}
