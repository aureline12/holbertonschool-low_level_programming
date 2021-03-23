#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: head of the struct.
 */
// void free_listint(listint_t *head)
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;

	/* Option 1: Acceder directamente al valor */
	/* free_listint2(&(**head).next); */
	/* Option 2: Acceder al valor por medio del puntero */
	free_listint2(&(*head)->next);
	/* free the list */
	free(*head);
	*head = NULL;
}
