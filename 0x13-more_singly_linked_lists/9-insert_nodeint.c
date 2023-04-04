#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: pointer to pointer to head of a linked list
 * @idx: index where the new node should be added
 * @n: data to add on the node
 * Return: the address of new node on success
 *			NULL if it fails or not possible to add new node at index idx
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *newNode;
	listint_t *temp;

	temp = *head;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	while (count < idx - 1)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		count++;
	}
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else if (temp->next)
	{
		newNode->next = temp->next;
		temp->next = newNode;
	}
	else
	{
		newNode->next = NULL;
		temp->next = newNode;
	}
	return (newNode);
}
