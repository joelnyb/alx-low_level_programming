#include "main.h"
/**
 * _memset - creates a buffer
 * @s: takes the first address of the character array
 * @b: takes the acutal value that will be stored
 * @n: amount of size to be allocated
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
