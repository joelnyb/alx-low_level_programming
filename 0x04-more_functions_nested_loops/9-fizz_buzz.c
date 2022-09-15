#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
void Fizz(void);
void Buzz(void);
void FizzBuzz(void);
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (i % 5 == 0)
		{
			if (i != 100)
			{
				printf("Buzz ");
			}
			else
			{
			printf("Buzz");
			}
			continue;
		}
		else
		{
			printf("%d ", i);
		}

	}
	printf("\n");
	return (0);
}
