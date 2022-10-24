#include <stdio.h>
#include "lists.h"

/**
* prints all the elements of a list_t list.
* singly linked list.
* Return: number of elements in the list.
*/

size_t print_list(const list_t *h)
{
const list_t *tmp;
unsigned int i;
tmp = h;
for (i = 0; tmp; i++)
{
printf("[%u] %s\n", tmp->len, tmp->str);
tmp = tmp->next;
}
return (i);
}
