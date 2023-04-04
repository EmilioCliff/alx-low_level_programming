#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list
 * @n: the int to add to the list
 * @head: header to the linked list
 * Return: NULL on fail
 *			address of new element on success
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
