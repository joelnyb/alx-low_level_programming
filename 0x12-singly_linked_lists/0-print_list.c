#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints contents of a list
 * @h: recieves the head pointer
 * Return: count
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	const struct list_s *ptr;


	ptr = h;

	while (ptr != NULL)
	{
		count++;
		if (ptr->str == NULL)
		{
			printf("[0] (nil)");

		}
		printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (count);
}
