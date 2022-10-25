#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free a linked list and sets head to null
 * @head: pointer to the first node
 * Return: void
 */
void free_listint2(listint_t **head)
{

	struct listint_s *tmp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
