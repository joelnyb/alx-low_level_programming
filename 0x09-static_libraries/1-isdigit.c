#include "main.h"
/**
 * _isdigit - checks for digit
 * @c : takes character or numbers
 * Return: Always 0
 */
int _isdigit(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 0 && c <= 9))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
