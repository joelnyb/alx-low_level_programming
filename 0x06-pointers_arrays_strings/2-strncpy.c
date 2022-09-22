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


	if (dest == NULL) return NULL;
	n = 0;

	while  (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}

	dest[n] = '\0';
	return (dest);
}
