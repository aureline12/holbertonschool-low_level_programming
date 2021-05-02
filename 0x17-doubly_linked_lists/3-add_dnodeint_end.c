#include "lists.h"
/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list.
* @head: head of the linked list
* @n: value of new data
* Return: node end
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node_end;
	dlistint_t *current_node;

	if (head == NULL)
		return (0);
	node_end = malloc(sizeof(dlistint_t));

	if (node_end == NULL)
		return (0);

	node_end->n = n;

	node_end->next = NULL; /* Assing NULl to declarate the of DLL*/
	node_end->prev = NULL; /* Assing NULl to declarate the of DLL*/

	if (*head == NULL)
	{
		(*head) = node_end;
		return (node_end);
	}

	current_node = *head;
	while (current_node->next != NULL) /* current node move to final */
		current_node = current_node->next;

	current_node->next = node_end; /* Assing the next value of prev node */
	node_end->prev = current_node;

	return (node_end);
}
