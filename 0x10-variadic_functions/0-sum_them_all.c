#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - sums a number of arguments
 * @n: the number of argumets
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;

	va_list numbers;

	va_start(numbers, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(numbers, int);
	}

	va_end(numbers);
	return (sum);
}
