#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to head of the linked list
 * @index: the index of the node
 * Return: the nth node of the list
 *			NULL if the node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	listint_t *node;
	unsigned int count = 0;

	temp = head;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	while (count < index)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		count++;
	}
	node->n = temp->n;
	node->next = temp->next;
	return (node);
}
