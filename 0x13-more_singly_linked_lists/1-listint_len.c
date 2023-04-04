#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: the linked list to find number of eelements
 * Return: Number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;
	const listint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
