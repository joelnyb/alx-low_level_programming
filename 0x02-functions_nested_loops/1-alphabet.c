#include "main.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alpha = 97;;
	for (alpha = 97; alpha < 123; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
}
