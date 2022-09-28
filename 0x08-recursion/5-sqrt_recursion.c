#include "main.h"
int square_root(int n, int x);
/**
 * _sqrt_recursion - calculate the square root
 * @n: takes in the number
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (square_root(0, n));
}
/**
 * square_root - calculate the square root
 * @n: the number
 * @x: square number
 * Return: Always 0
 */
int square_root(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n *  n == x)
		return (n);
	return (square_root(n + 1, x));
}
