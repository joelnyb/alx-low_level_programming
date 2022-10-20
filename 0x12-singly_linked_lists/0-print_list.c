#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints contents of a list
 * @h: recieves the head pointer
 * Return: count
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const struct list_s *ptr;

ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}

		count++;
		ptr = ptr->next;
	}
	return (count);
}
