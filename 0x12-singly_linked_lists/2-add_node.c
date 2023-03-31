#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list
 * @str: the string to add
 * @head: the list to add node to
 * Rerutn: address of a new element
 *			NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	char *ch = strdup(str);
	unsigned int leng = strlen(ch);
	list_t *newNode = newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = ch;
	newNode->len = leng;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}

