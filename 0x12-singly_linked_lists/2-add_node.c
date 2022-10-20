#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - add a node at the begining
 * @head: first pointer
 * @str: string recieved
 * Return: address of newly added node
 */
list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	list_t *tmp;
	int len;

	tmp = malloc(sizeof(list_t));

	if (tmp == NULL)
		return (NULL);
	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(tmp);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	tmp->str = duplicate;
	tmp->len = len;
	tmp->next = *head;

	*head = tmp;
	return (tmp);
}
