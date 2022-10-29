#include "main.h"
/**
 * get_bit - gets the bit of an index
 * @n: the number
 * @index: the index starting form 0
 * Return: 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int var;

	var = n >> index;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	if (var & 1)
		return (1);
	else
		return (0);
}
