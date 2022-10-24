#include "lists.h"

/**
* list_len - finds the number of elements in a linked list
* pointer to the start of the linked list
* Return: number of elements in the linked list
*/
size_t list_len(const list_t *h)
{
	size_t nodes;
	nodes = 0;
	while (h != NULL)
	{
	h = h->next;
	nodes++;
	}
	return (nodes);
}
