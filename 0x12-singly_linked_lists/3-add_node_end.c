#include "lists.h"
/**
 * add_node_end - adds new node at the end
 * @str: string to be added
 * @head: list to add new node to
 * Return: address of the new element
 *			NULL on fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *present = *head;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = strlen(str);

	if (*head == NULL)
	{
		*head = newNode;
		newNode->next = NULL;
	}
	else
	{
	while (present->next != NULL)
		present = present->next;
	present->next = newNode;
	newNode->next = NULL;
	}
	return (newNode);
}
