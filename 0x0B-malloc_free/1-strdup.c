#include "main.h"
#include <stdlib.h>
/**
 * _strdup - dupicates string to heap
 * @str: the string
 * Return: Always pointer
 */
char *_strdup(char *str)
{
	int i = 0;
	int count = 0;
	char *arr;
	
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	 arr = (char *)malloc(count * sizeof(char));
	 if (arr == NULL)
		 return (NULL);

	for (i = 0; i < count; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
}
