#include "lists.h"
/**
 * sum_listint - adds the sum of all the data in alinked list
 * @head: head of a linked list
 * Return: the sum oa all data in a linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;
	if (temp == NULL)
		return (0);
	while (temp->next != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	sum += temp->n;
	return (sum);
}
