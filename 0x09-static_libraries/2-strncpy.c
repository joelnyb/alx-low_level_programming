#include "main.h"
#include <string.h>
/**
 * _strncpy - takes string to be copied
 * @dest: copied string
 * @src: source string
 * @n: number of string
 * Return: Returns the value
 */
char *_strncpy(char *dest, char *src, int n)
{

	int a = 0;

	while  (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
