#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str: Takes in the paramter
 * return: Always 0
 */
void puts_half(char *str)
{
	int size;
	int i;
	int size_half;

	size = strlen(str);
	if (size % 2 == 1)
	{
		size_half = size / 2 + 1;
	}
	else
		size_half = size / 2;
	for (i = size_half; i < size; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
