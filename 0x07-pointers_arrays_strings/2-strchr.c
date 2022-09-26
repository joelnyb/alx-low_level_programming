#include "main.h"
/**
 * _strchr - Locates the string
 * @s: the string to take the copy
 * @c: specific character
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int size = 0;
	int i;

	while (s[size])
	{
		size++;
	}
	for (i = 0; i <= size; i++)
	{
		if (c == s[i])
		{
			s += i;
			return (s);
		}
	}

	return ('\0');

}
