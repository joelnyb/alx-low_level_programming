#include "lists.h"
/**
 * listint_len - prints the number of elements in the list
 * @h: pointer to the first node
 * Return: count
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
