#include "main.h"
/**
 * leet - function that encodes string
 * @str: takes in the string
 * Return: Always 0
 */
char *leet(char *str)
{
	char upper[5] = {'A', 'E', 'O', 'T', 'L'};
	char num[5] = {'4', '3', '0', '7', '1'};
	int i = 0;
	int j = 0;

	while (str[i])
	{
	j = 0;
		while (j < 5)
		{
			if (str[i] == upper[j] || str[i] - 32 == upper[j])
			{
				str[i] = num[j];
			}
			j++;
		}
		i++;
	}


	return (str);

}
