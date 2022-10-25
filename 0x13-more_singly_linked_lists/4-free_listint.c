#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free an entire list
 * @head: pointer to first node
 * Return: void
 */
void free_listint(listint_t *head)
{
	struct listint_s *ptr = head;

	while (ptr != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}

}
