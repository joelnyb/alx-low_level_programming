#include "main.h"
/**
 * _strlen_recursion - Taskes the string whose lenght will be determined
 * @s: address of first charcter in the stirng
 * Return: Alwasy 0
 */
int _strlen_recursion(char *s)
{
	unsigned int length;

	if (*s == '\0')
		;
	else
		length =  (1 + _strlen_recursion(s + 1));
	return (length + 1);
}
