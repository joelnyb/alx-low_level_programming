#include "3-calc.h"
/**
 * main - will perform simple calculations
 * @argc: counts arguments that are inserted
 * @argv: stores the arguments in an array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int ar1, ar2, result;
	int (*func)(int, int);
	char o;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	ar1 = atoi(argv[1]);
	ar2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	o = *argv[2];

	if ((o == '/' || o == '%') && ar2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(ar1, ar2);
	printf("%d\n", result);
	return (0);
}
