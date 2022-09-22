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
	int st1_length = strlen(dest);
	int st2_length = strlen(src);
	int size = st1_length + st2_length + 1;
	int i;

	for (i = 0; i < n; i++)
	{
		dest[st1_length] = src[i];
	}
	dest[size + n + 1] = '\0';
	return (dest);

}
