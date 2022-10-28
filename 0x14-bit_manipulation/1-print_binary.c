#include "main.h"
/**
 * print_binary - prints binary from decimal
 * @n: the decimal number
 * Returns: The binary number
 */
void print_binary(unsigned long int n)
{
	unsigned int tmp = n;
	int count = 0;
	int decoy;
	int i, size;
	while (tmp > 0)
	{
		count++;
		tmp = tmp >> 1;
	}
	size = count - 1;

	if (n != 0)
	{
		for (i = size; i >= 0; i--)
		{
			decoy = n >> i;
			if (decoy & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
	else if (n == 0)
	{
		_putchar('0');
	}
}
