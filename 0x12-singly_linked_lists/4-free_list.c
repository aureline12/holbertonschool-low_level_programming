#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: head of the struct.
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	free_list(head);
	free(head->len);
	free(head->str);
}
