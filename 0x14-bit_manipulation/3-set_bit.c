#include "main.h"

/**
 * set_bit - set a bit to 1
 * @n: the number passed
 * @index: the index to be fipped
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
