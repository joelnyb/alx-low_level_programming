#include "main.h"
#include <string.h>
/**
 * print_rev - Takes the string
 * @s: Taskes the string address to access the values
 * return: Alwasy 0
 */
void print_rev(char *s)
{
	int n;
	int i;

	n = strlen(s);
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

