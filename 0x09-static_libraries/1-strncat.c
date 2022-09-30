#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strncat - concatenates specified amount of string
 * @dest: String 1
 * @src: string 2
 * @n: number of letters to be concatenated
 *Return: always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;

	while (dest[len])
	{
		len++;
	}
	while (i < n && src[i])
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len + n + 1] = '\0';
	return (dest);

}
