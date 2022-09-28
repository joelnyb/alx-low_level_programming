#include "main.h"
/**
 * _strlen_recursion - Taskes the string whose lenght will be determined
 * @s: address of first charcter in the stirng
 * Return: Alwasy 0
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
		;
	else
		return  (1 + _strlen_recursion(s + 1));
	
	return (0);
}
