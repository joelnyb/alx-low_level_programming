#include "main.h"
/**
 * factorial - calculates factorial of a number
 * @n: number to be calculated
 * Return: Always 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
