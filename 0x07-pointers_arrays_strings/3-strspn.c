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

	while (*accept != '\0')
	{
		while (*s != '\0')
		{
			count++;
			if (*s == *accept)
			{
				break;

			}
			s++;
		}
		if (*s == *accept)
		{
			break;
		}
		accept++;
	}
	return (count);
}
