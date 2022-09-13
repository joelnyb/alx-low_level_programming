#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alpha = 97;

	for (alpha = 97; alpha < 123; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');

}
