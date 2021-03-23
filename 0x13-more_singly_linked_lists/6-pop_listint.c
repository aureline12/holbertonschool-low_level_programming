#include "lists.h"

/**
 * pop_listint - frees a list_t list.
 * @head: head of the struct.
 * Return: head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	/* int value_node; */

	if (head)
		return (0);

	temp = *head;
	free(temp);
	return ((*head)->n);

}
