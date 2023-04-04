#include "lists.h"
/**
 * free_listint - frees a list
 * @head: pointer to list to free
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	if (head == NULL)
		free(head);
	else
	{
		while (temp != NULL)
		{
			temp = temp->next;
			free(head);
			head = temp;
		}
	}
}

