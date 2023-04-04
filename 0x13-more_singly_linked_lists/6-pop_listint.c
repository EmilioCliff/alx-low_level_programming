#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: a pointer to the address of a head of a linked list
 * Return: head node's data
 *			0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	temp = *head;
	if (temp == NULL)
		return (0);
	data = temp->n;
	temp = temp->next;
	free(*head);
	*head = temp;
	return (data);
}
