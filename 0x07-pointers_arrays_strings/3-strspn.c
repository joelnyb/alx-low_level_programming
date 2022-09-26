#include "main.h"
/**
 * _strspn - function that fids the matching character location
 * @s: string that contains the main string
 * @accept: the string that is used to crosscheck
 * Return: the string count
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i = 0;
	int j;

	while (accept[i] != '\0')
	{
		j = 0;

		while (s[j] != '\0')
		{
			if (s[j] == accept[i])
			{
				count++;

			}
			s++;
		}
		accept++;
	}
	return (count);
}
