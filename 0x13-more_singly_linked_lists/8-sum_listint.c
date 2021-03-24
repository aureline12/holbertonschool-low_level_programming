#include "lists.h"

/**
 * pop_listint - frees a list_t list.
 * @head: head of the struct.
 * Return: head node’s data (n).
 */
int sum_listint(listint_t *head)
{
	size_t num_elements;

	if (head == NULL)
		return (0);
	num_elements = (1 + sum_listint(head->next));

	while (head != NULL)
		return (num_elements + head->n); /* Return numbers of elements */
	return (0);
}
