#include "main.h"
#include <stdio.h>
/**
 * _strchr - Locates the string
 * @s: the string to take the copy
 * @c: specific character
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *) (s));
		}
		s++;
	}
	return (NULL);

}
