#include <stdio.h>
/**
 * main - entry point
 * @argc: parameter
 * @argv: array of command
 * __attribute__((unused)): unused
 * Return: Alwasy 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
