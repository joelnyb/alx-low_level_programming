#include "main.h"
/**
 * swap_int - takes numbers and swap them
 * @a: Number 1
 * @b: number 2
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{	
	
	*a = *a + *b - *a;
	*b = *a + *b - *b;
}
