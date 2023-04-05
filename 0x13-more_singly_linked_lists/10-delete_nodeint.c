#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at an index
 * @head: pointer to pointer to head of a linked list
 * @index: index where to delete the node
 * Return: 1 on Success and -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp;
	listint_t *current;

	temp = *head;
	if (index == 0)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	else if (index == 1)
	{
		current = temp->next;
		temp->next = temp->next->next;
		free(current);
	}
	else
	{
		while (count < index - 1)
		{
			count++;
			temp = temp->next;
			if (temp == NULL)
				return (-1);
		}
		if (temp->next == NULL)
			return (-1);
		current = temp->next;
		temp->next = temp->next->next;
		free(current);
	}
	return (1);
}
