#include "main.h"

/**
 *_strlen - Takes the string
 * @s: Takes the actual string
 * Return: Always count
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);

}
