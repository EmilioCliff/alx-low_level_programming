#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list
 * @n: int to add to the list
 * @head: pointer to list to add to
 * Return: address of ne element on success
 *			NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp;

	temp = *head;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (temp == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}
	return (newNode);
}

