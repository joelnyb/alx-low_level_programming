#include "main.h"
#include <stdio.h>

/**
 * mult - Entry point
 * Return: Always 0 (Success)
 */
int mult()
{
	int value = 0;
	int sum ;
	int mult2;
	int i = 0;
	int n = 1024;

	for (i = 1; i < n; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			mult2 = i;

		}
		else
		{
			continue;
		}
		sum = mult2 + value;
		value = sum;
		
	}
	printf("%d", value);
	printf("\n");
	return value;
}

