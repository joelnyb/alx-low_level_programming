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
	int i = 0;
	int counter;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			counter = i;
			break;
		}
		i++;
	}
	while (s[counter] != '\0')
	{
		s += counter;
		counter++;
		return (s);
	}
	return (0);

}
