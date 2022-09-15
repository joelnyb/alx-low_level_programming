#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'A';
	_putchar(c);
	_putchar(':');
	_putchar(' ');
	_putchar(_isupper(c) + '0');
	_putchar('\n');
	c = 'a';
	_putchar(c);
	_putchar(':');
	_putchar(' ');
	_putchar(_isupper(c) + '0');
	_putchar('\n');
	return (0);
}
