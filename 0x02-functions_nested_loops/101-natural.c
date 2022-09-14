#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int value = 0;
	int sum;
	int mult2;
	int i;

	for (i = 1; i < 1024; i++)
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
		mult2 = 0;
	}
	printf("%d\n", value);
	return (0);
}
