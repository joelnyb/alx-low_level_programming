#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes a node at a certain position
 * @head: pointer to the first node
 * @index: the node position to be deleted
 * Return: success result
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	struct listint_s *ptr = (*head);
	struct listint_s *tmp = (*head);

	if (ptr == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (ptr->next == NULL)
			return (-1);
		ptr = ptr->next;
	}
	tmp = ptr->next;
	ptr->next = tmp->next;
	free(tmp);
	return (1);

}
