#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strcat - Takes in the strings to be concatenate
 * @dest: string one
 * @src: string two
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int st1_length = strlen(dest);
	int st2_length = strlen(src);
	int size = st1_length + st2_length + 1;
	int i;

	for (i = 0; i < st2_length; i++)
	{
		dest[st1_length + i] = src[i];
	}
	dest[size - 1] = '\0';

	return (dest);
}
