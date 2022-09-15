#include "main.h"
/**
 * print_diagonal - prints \ diagonally
 * @n: takes the amount to be taken
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{

	_putchar('\\');
	_putchar('\n');

		for (j = 0; j <= i; j++)
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
}
