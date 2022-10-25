#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node
 * @head: pointer to first node
 * Return: data of the node
 */
int pop_listint(listint_t **head)
{
	int n;

	struct listint_s *ptr = (*head);

	n = (*head)->n;
	(*head) = (*head)->next;
	free(ptr);

	return (n);
}
