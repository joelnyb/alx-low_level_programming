#include "main.h"
#include <stdio.h>

/**
 * mult - Entry point
 *
 * Return: Always 0 (Success)
 */
int mult(void)
{
	int value = 0;
	int sum, mult2;

	for (int i = 1; i < 1024; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			mult2 = i;

		}
		else
			continue;
		sum = mult2 + value;
	}
	printf("%d", value);
}

