#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array of integers
 * @min: min number
 * @max: max number
 * Return: always address
 */
int *array_range(int min, int max)
{
	int *arr;
	int length, i;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	arr = malloc(sizeof(int) * length);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
