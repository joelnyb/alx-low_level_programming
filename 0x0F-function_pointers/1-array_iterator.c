#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - a function to iterate on an array elements
 * @array: array address passed
 * @size: size of the array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
