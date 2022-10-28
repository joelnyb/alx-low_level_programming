#include "main.h"
/**
 *_power - calculates the power
 *@n: the value 2 will be passed
 *@j: the power that will be raised to
 *Return: sum
 */
int _power(int n, int j)
{
	int i;
	int sum = 1;

	for (i = 0; i < j; i++)
	{
		sum = sum * n;
	}
	return (sum);
}


/**
 * int binary_to_uint - converts binary to Decimal
 * @b: string address passed to the function
 * Return: integer sum
 */
unsigned int binary_to_uint(const char *b)
{
	int sum = 0;
	int len = 0;
	int i, j;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
	{
		len++;
	}

	i = len - 1;
	j = 0;
	while (i >= 0)
	{
		if (b[i] == '1')
		{
			sum = sum + ((b[i] - 48) * (_power(2, j)));
		}
		else if (b[i] != '1' && b[i] != '0')
			return (0);
		j++;
		i--;
	}
	return (sum);
}
