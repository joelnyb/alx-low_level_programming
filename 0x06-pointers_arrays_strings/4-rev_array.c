#include "main.h"
#include <string.h>
/**
 * reverse_array - Takes the array t obe reversed
 * @a: The array to be reversed
 * @n: number of integers to be reversed
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0;  i < (n / 2); i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
