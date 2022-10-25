#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a node at certain index
 *@head: pointer to the first node
 *@idx: index where the node will be inserted
 *@n: number to be inserted
 *Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int pos;

	struct listint_s *tmp = malloc(sizeof(struct listint_s));

	struct listint_s *ptr = (*head);

	pos = idx - 1;

	if (idx == 0)
	{
		tmp->next = ptr;
		*head = tmp;
		return (tmp);
	}


	while (pos != 0)
	{
		if (ptr == NULL || ptr->next == NULL)
			return (NULL);
		ptr = ptr->next;
		pos--;
	}

	tmp->next = ptr->next;
	tmp->n = n;
	ptr->next = tmp;

	return (tmp);

}
