#include "lists.h"

/**
 * free_listint2 - frees a list_t list.
 * @head: head of the struct.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *temp2;

	if (*head == NULL)
		return;

	temp = *head;

	while (temp)
	{
		temp2 = temp->next;
		free(temp);
		temp = temp2;
	}
	*head = NULL;
}
