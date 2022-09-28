#include "main.h"
/**
 * _print_rev_recursion - takes the string to be reversed
 * @s: the string address of the first character
 * Return: Always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
