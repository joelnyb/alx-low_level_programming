
#include "main.h"
#include <string.h>

/**
 * rev_string - function takes the string
 * @s: Taskes the string
 * return: ALways 0
 */
void rev_string(char *s)
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
