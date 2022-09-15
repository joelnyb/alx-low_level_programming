#include "main.h"

/**
 * print_triangle - prints right angle mirror triangles
 * @size: number of size
 * Return: Always 0
 */
void print_triangle(int size)
{
	int row;
	int space;
	int star;
	
	if (size > 0)
	{
	for (row = 0; row < size; row++)
	{

		for (space = 0; space <= (size - row); space++)
		{
			_putchar(' ');
		}
			for (star = 0; star <= row; star++)
			{
				_putchar('#');
			}
			_putchar('\n');
	}
	}
	_putchar('\n');
}

