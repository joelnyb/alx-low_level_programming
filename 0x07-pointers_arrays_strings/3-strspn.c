#include "main.h"
/**
 * _strspn - function that fids the matching character location
 * @s: string that contains the main string
 * @accept: the string that is used to crosscheck
 * Return: the string count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int i = 0;
	unsigned int j;

	while (accept[i])
	{
		j = 0;

		while (s[j] != 32)
		{
			if (accept[i] == s[j])
			{
				count++;

			}
			s++;
		}
		accept++;
	}
	return (count);
}
