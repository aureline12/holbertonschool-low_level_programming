#include "lists.h"
/**
 * add_node - function that returns the number of elements
 *  in a linked list_t list.
 * @head: head of the struct.
 * @str: head of the struct.
 * Return:the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int copy_len;
	char *new_str;

	if (head == NULL)
		return (0);
	/* reserve the space */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (0);
	/* Get the len of the sttings*/
	for (copy_len = 0; str[copy_len] != '\0' ; copy_len++)
	{}
	new_str = strdup(str);
	new_node->str = new_str; /* pass the str */
	new_node->len = copy_len; /* pass the leng */
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
