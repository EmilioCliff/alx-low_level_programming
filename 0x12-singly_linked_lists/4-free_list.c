#include "lists.h"
/**
 * free_list - frees the list
 * @head: pointer to list to be freed
 */
void free_list(list_t *head)
{
	list_t *present = head;
	list_t *next_node;

	while (present != NULL)
	{
		next_node = present->next;
		free(present->str);
		free(current);
		current = next_node;
	}
}
