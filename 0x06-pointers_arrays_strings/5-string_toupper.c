#include "main.h"
#include <string.h>
/**
 * string_toupper - Changes the lower case to lowe case
 * @string: string
 * Return: Always 0
 */
char *string_toupper(char *string)
{
	int i = 0;

	while (string[i] != '\0')
	{
		if (string[i] >= 'a' && string[i] <= 'z')
		{
			string[i] = string[i] - 32;
		}
		i++;

	}
	return (string);
}
