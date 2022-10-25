#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add a new node at the begining
 * @head: pointer to the fist node
 * @n: the number to be added as a new element
 * Return: return address of head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	struct listint_s *tmp = malloc(sizeof(struct listint_s));

	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
