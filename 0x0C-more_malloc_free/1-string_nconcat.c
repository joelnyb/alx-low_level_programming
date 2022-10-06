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
	unsigned int i = 0, j = 0, size_s1 = 0, size_s2 = 0, k;
	char *arr;

	while (s1[i])
	{
		size_s1++;
		i++;
	}
	while (s2[j])
	{
		size_s2++;
		j++;
	}
	if (n > size_s2)
	{
		n = size_s2;
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	arr = (char *)malloc((size_s1 + n + 1) * sizeof(char));
	if (arr == NULL)
	{
		return (0);
	}
	for (i = 0; i < size_s1; i++)
	{
		arr[i] = s1[i];
	}
	for (k = 0;  k < n; k++)
	{
		arr[k + size_s1] = s2[k];
	}

	
	return (arr);
}
