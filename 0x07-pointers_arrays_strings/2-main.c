#include "main.h"
#include <stdio.h>
/**
 * main -entry point
 * Return: Always 0
 */
int main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'x');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
