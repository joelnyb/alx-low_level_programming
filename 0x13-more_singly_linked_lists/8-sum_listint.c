#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - sums the value of lists
 * @head: pointer to the first node
 * Return: the sum of the elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	struct listint_s *ptr = head;

	while (ptr != NULL)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
