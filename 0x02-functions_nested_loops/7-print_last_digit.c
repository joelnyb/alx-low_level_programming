#include "main.h"

/**
 * print_last_digit - check the code
 *@n: inputs digit to display last digiet number
 *
 * Return: Always 0;
 */
int print_last_digit(int n)
{
	int last;
	if (n >= 0)
	{
		last = n % 10;
		_putchar(last + '0');
		return (last);
	}
	else
	{
		n = n * -1;
		last = n % 10;
		_putchar(last + '0');
		return (last);
	}
}
