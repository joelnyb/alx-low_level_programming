#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints the number of elemets
 * @h: first pointer to the first node
 * Return: count
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
