#include <unistd.h>
/**
 * _putchar - writes a character
 * @c: the character to be printed
 * Return: On succes 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
