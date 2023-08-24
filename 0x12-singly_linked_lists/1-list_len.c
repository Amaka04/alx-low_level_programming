#include "lists.h"
/**
 * list_len - length of the list
 * @h: pointer to the head
 * Return: no of nodes
 */
size_t list_len(const list_t *h)
{
	int j;

	if (h == NULL)
	return (0);

	for (j = 1; h->next != NULL; j++)
		h = h->next;
	return (j);
}
