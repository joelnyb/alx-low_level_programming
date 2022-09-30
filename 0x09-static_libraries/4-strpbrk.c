#include "main.h"
/**
 * _strpbrk - checks the same string and prints the remaining
 * @s: main string
 * @accept: string which is to be compared
 * Return: Always Return 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i])
	{
		j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				s = s + i;
				return (s);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
