#include "main.h"
#include <stdio.h>
/**
 * puts2 - Prints everyother character
 * @str: takes the string parameter
 *return: Always 0
 */
void puts2(char *str)
{
	int i;
	int size;

	size = strlen(str);

	for (i = 0; i < size; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
