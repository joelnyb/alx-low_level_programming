#include "main.h"
/**
 * is_prime_number - determines whether a number is prime or not
 * @n: the number taken
 * @x: for comparison
 * Return: Alwasy 0
 */
int prime(int x, int n);
int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	else
		return (prime(2, n));

}
/**
 * prime - allows to determine whether a number is prime
 * @x: number that will be compared
 * @n: number to be checked if it is prime or not
 * Return: always 0
 */
int  prime(int x, int n)
{
	if (n < 0)
	{
		return (0);
	}
	else
	{
		if (n % x == 0 && x < n)
			return (0);
		else if (x == n)
			return (1);
	}

		return (prime(x + 1, n));

}
