#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add a new node at the end
 * @head: pointer to the first node
 * @n: the number to be added to the node
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	struct listint_s *tmp = malloc(sizeof(struct listint_s));
	struct listint_s *ptr;

	ptr = *head;

	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	if (ptr)
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = tmp;
	}
	else
	{
		*head = tmp;
	}

	return (tmp);
}
