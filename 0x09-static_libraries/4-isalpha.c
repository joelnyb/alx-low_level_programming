#include "main.h"

/**
 * _isalpha -check the code
 *
 * @c: determines whether a charcter is upper case or lower case
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
