#include "lists.h"
/**
 * print_list - prints all elements of a list
 * @h: the list to print
 * Return: number of elements printed
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;
	const list_t *present = h;

	while (present != NULL)
	{
		if (present->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", present->len, present->str);
		i++;
		present = present->next;
	}
	return (i);
}
