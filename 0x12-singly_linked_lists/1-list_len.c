#include "lists.h"
/**
 * list_len - shows number of element in a linked list
 * @h: the list to find number of element
 * Return: Number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;
	const list_t *present = h;

	while (present != NULL)
	{
		i++;
		present = present->next;
	}
	return (i);
}
