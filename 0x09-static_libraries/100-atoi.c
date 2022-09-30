#include "main.h"
/**
 * _atoi - converts string to integer
 * @s: Takes the string pointer
 * Return: Always
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int result = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = (result * 10) + s[i] - 48;
		}
		else if (result > 0)
		{
			break;
		} 
	}
	return (sign * result);
}
