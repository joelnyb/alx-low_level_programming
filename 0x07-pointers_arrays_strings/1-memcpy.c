#include "main.h"
/**
 * _memcpy - copy bites of memory buffer
 * @dest: destnation of the copied buffer
 * @src: source of the memory to be copied
 * @n: size of to be copied
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
