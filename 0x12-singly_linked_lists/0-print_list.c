#include "lists.h"
/**
 * print_list - prints all elements of a list
 * @h: the list to print
 * Return: number of elements printed
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 1;

	if (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		if (h->next != NULL)
		{
		
			printf("[%d] %s\n", h->next->len, h->next->str);
			i++;
		}
		return (i);
		}
		else
		{
		printf("[%d] %s\n", h->len, h-> str);
		if (h->next != NULL)
		{
		
			printf("[%d] %s\n", h->next->len, h->next->str);
			i++;
		}
	return (i);
	}
}
return (i);
}
	
