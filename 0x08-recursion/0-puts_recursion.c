#include "main.h"
/**
 * _puts_recursion - prints the string recurssively
 * @s: the string input address and value
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}

}
