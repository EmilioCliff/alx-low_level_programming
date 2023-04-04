#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: pointer to address of a head pointer to a list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

		temp = *head;
		while (temp != NULL)
		{
			temp = temp->next;
			free(*head);
			*head = temp;
		}
}
