#include "main.h"
/**
 * _puts - Taskes in the string to print
 * @str: The string pointer
 * return: Always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
