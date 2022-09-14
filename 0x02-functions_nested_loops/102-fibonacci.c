#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int sum = 2;
	long int last_term = 1;
	long int i;
	long int next_term;

	for (i = 0; i <= 47; i++)
	{
		if (i == 0)
		{
			printf("%ld, ", last_term);
			printf("%ld, ", sum);
		}
		next_term = sum + last_term;
		last_term = sum;
		sum = next_term;
		if (i == 47)
		{
			printf("%ld", sum);
			break;
		}
		printf("%ld, ", sum);
	}
	printf("\n");
	return (0);
}
