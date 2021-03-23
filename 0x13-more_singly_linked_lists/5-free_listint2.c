#include "lists.h"

/**
 * free_listint2 - frees a list_t list.
 * @head: head of the struct.
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;

	/* Option 1: Directly access the value */
	/* free_listint2(&(**head).next); */
	/* Option 2: Access the value through the pointer */
	free_listint2(&(*head)->next);
	/* free the list */
	free(*head);
	*head = NULL;
}
