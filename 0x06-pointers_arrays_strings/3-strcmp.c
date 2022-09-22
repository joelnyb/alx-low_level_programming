#include "main.h"
#include <string.h>
/**
 * _strcmp - takes the string to be compared
 * @s1: string 1
 * @s2: string 2
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int size = strlen(s1) + strlen(s2);
	int i;

	for (i = 0; i < size; i++)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			return (0);
		}
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
	}
	return (0);
}
