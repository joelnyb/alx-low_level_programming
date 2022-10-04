#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a 2D in the heap memory
 * @width: width of the array
 * @height: height of the array
 * Return: address of the 2d array
 */
int **alloc_grid(int width, int height)
{
	int **ipp;
	int i;

	if (height == 0 || height < 0)
		return (NULL);
	if (width == 0 || width < 0)
		return (NULL);
	ipp = (int **)malloc(width * sizeof(int *));
	for (i = 0; i < width; i++)
	{
		ipp[i] = (int *)malloc(height * sizeof(int));
	}
	return (ipp);
}
