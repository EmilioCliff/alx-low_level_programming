#include "lists.h"
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	if (h == NULL)
		return 0;
	while (h != 0)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	return (count);
}
