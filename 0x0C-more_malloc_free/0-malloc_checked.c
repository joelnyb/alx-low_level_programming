#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - takes in numer of byte to allocate
 * @b: number of byte to allocate
 * Return: Always address
 */
void *malloc_checked(unsigned int b)
{
	void *mallo;

	mallo = malloc(b);
	if (mallo == NULL)
	{
		exit(98);
	}
	return (mallo);
}
