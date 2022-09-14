#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int sum = 1;
	long int last_term = 0;
	int i;
	long int next_term;
	long int even_added;
	long int value = 0;
	long int trying;

	for (i = 0; i <= 50; i++)
	{
		next_term = sum + last_term;
		last_term = sum;
		sum = next_term;
		if (sum > 4000000)
		{
			break;
		}
		trying = sum % 2;
		if (trying == 0)
		{
			even_added = value + sum;
			value = even_added;
		}
	}
	printf("%ld\n", value);
	return (0);
}
