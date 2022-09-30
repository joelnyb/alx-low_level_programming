#include "main.h"

/**
 * _islower - separates between uppercase and lowercase
 *
 *@c:  Represents character
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
