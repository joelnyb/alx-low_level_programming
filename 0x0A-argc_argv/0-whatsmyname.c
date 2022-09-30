#include <stdio.h>
/**
 * main - entry point
 * @argc: argc parameter
 * @argv: array of commands
 * @__attribute__((unused)): unused
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
