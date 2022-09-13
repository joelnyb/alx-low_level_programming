#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;
	int hour_modulo;
	int min_modulo;

	while (hour < 24)
	{
		while (minute < 60)
		{
			hour_modulo = hour % 10;
			min_modulo = minute % 10;
			_putchar(hour / 10 + '0');
			_putchar(hour_modulo + '0');
			_putchar(':');
			_putchar(minute / 10 + '0');
			_putchar(min_modulo + '0');
			_putchar('\n');
			minute++;
		}
		hour++;
		minute = 0;
	}
}
