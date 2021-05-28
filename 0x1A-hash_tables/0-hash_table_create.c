#include "hash_tables.h"
/**
 * hash_table_create - fuction creates an hash table
 *
 * @size: size of the hash table
 * Return: table whit new size
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;

	/* Assign the double pointer array */
	table->array = calloc(size, sizeof(hash_node_t **));
	if (table->array == NULL)
		return (NULL);

	return (table);
}
