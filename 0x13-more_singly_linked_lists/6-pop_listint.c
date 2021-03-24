#include "lists.h"

/**
 * pop_listint - frees a list_t list.
 * @head: head of the struct.
 * Return: head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num_values;

	if (!head)
		return (0);
	/* Save value so you do not miss. */
	num_values = (*head)->n;
	/*  Save the reference delen head to pass the reference */
	temp = (*head); /* Assigned the temporary reference */
	*head = (*head)->next; /* Referenced the new reference */
	free(temp); /* Free the head. */

	return (num_values);
}
