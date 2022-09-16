#include <stdio.h>


/**
 *main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long n = 612852475143;
	long j = 2;
	long i;

	for (i = 0; i < n; i++)
	{
		if (n % j == 0)
		{
			n = n / j;
		}
		else
		{
			j++;
		}
	}
	printf("%ld\n", n);
	return (0);
}
