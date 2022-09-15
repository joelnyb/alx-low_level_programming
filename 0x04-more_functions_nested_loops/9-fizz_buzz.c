#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
void Fizz(void);
void Buzz(void);
void FizzBuzz(void);
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			FizzBuzz();
			continue;
		}
		else if (i % 3 == 0)
		{
			Fizz();
			continue;
		}
		else if (i % 5 == 0)
		{
			Buzz();
			continue;
		}
		else
		{
			if (i < 10)
			{
				_putchar(i + '0');
				_putchar(' ');
			}
			else if (i >= 10)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar(' ');
			}
		}

	}
	_putchar('\n');
	return (0);
}
/**
 * Fizz - multiple of 3
 * @void: Takes no parameter
 * Return: Always 0
 */
void Fizz(void)
{
	_putchar('F');
	_putchar('i');
	_putchar('z');
	_putchar('z');
	_putchar(' ');
}
/**
 * Buzz - multiple of 5
 * @void: Takes no parameter
 * Retrun: Always 0
 */
void Buzz(void)
{
	_putchar('B');
	_putchar('u');
	_putchar('z');
	_putchar('z');
	_putchar(' ');
}
/**
 * FizzBuzz - both multiples of 3
 * @void: takes no parameter
 * Return: Always 0
 */
void FizzBuzz(void)
{
	_putchar('F');
	_putchar('i');
	_putchar('z');
	_putchar('z');
	_putchar('B');
	_putchar('u');
	_putchar('z');
	_putchar('z');
	_putchar(' ');
}

