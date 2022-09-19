
#include "main.h"


/**
 * rev_string - function takes the string
 * @s: Taskes the string
 * return: ALways 0
 */
void rev_string(char *s)
{
	int size = 0;
	int i;
	char tmp;
	int size2;

	while (s[size] != '\0')
	{
		size++;
	}
	size2 = size - 1;
	for (i = 0; i < size / 2; i++)
	{
		tmp = s[i];
		s[i] = s[size2];
		s[size2] = tmp;
		size2 -= 1;
	}
}
