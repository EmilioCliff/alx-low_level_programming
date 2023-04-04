#include "lists.h"
/**
 * print_listint - prints all elements of a list
 * @h: the linked in list to print
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;
	const listint_t *ptr;

	if (h == NULL)
		printf("Linked list is empty");
	ptr = h;
	while (ptr != NULL)
	{
		count++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (count);
}
