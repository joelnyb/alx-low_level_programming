#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates array in the heap
 * @size: size of the array
 * @c: character
 * Return: return pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = (char *)malloc(size * sizeof(char));
	if (size == 0)
		exit (NULL);
	for ( i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
