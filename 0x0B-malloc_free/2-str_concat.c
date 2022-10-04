#include "main.h"
#include <stdlib.h>
/**
 * str_concat - string will be concatenated in the heap
 * @s1: string one
 * @s2: string two
 * Return: the address of the concatenated array
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int size_s1 = 0;
	int size_s2 = 0;
	char *arr;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		size_s1++;
		i++;
	}

	while (s2[j] != '\0')
	{
		size_s2++;
		j++;
	}

	arr = (char *)malloc((size_s1 + size_s2 + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size_s1; i++)
	{
		arr[i] = s1[i];
	}
	for (i = 0; i < size_s2; i++)
	{
		arr[i + size_s1] = s2[i];
	}
	return (arr);
}
