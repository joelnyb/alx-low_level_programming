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
	int i, j;

	if (height == 0 || height < 0)
		return (NULL);
	if (width == 0 || width < 0)
		return (NULL);
	ipp = (int **)malloc(height * sizeof(int *));
	if (ipp == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ipp[i] = (int *)malloc(width * sizeof(int));
			if (ipp[i] == NULL)
			{
				for (; i >= 0; i--)
					free(ipp[i]);
				free(ipp);
				return (NULL);
			}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ipp[i][j] = 0;
	}
	return (ipp);
}
