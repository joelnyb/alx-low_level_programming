#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - takes two strings and concatenates n amount
 * @s1: string one
 * @s2: string two
 * @n: number of string
 * Return: always the address
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *arr;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;
	arr = (char *)malloc((i + j + 1) * sizeof(char));
	if (arr == NULL)
	{
		return (0);
	}
	for (k = 0; k < i; k++)
	{
		arr[k] = s1[k];
	}
	for (k = 0;  k < j; k++)
	{
		arr[k + i] = s2[k];
	}
	arr[i + j] = '\0';


	return (arr);
}
