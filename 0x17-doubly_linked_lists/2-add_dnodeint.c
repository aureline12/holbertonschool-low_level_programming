#include "lists.h"
/**
* add_dnodeint - adds a new node at the beginning of a dlistint_t list.
* @head: head of the list
* @n: number of new data
* Return: Always 0
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (0);

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (0);

	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
