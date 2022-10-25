#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - gets the index node
 * @head: pointer to the first node
 * @index: index of the node to be returned
 * Return: address of the indexed node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	struct listint_s *ptr = head;

	while (index != 0)
	{
		ptr = ptr->next;
		index--;
	}
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
