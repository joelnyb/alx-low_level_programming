#include <stdio.h>
/**
 * main -entry point
 *@argc: argc parameter
 *@argv: array of command listed
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
