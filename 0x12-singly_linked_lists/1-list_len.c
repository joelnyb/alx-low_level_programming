#include "lists.h"
/**
 * list_len - calculates the number of elements
 * @h: is the head pointer for the linked list
 * Return: count
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	const struct list_s *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
