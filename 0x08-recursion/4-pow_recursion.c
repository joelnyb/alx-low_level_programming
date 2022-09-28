#include "main.h"
/**
 * _pow_recursion - function that calculates the power of a function
 * @x: x value
 * @y: y value
 * Return: always 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));

	return (0);
}
