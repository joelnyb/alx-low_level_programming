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
	int i = 0, var = 0;

	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		else if (s1[i] == '\0')
		{
			var = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			var = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			var = s1[i] - s2[i];
			break;
		}
		else
			i++;
	}
	return (var);

}
