#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of table
 *
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/* creates a pointer to a new hash table*/
	hash_table_t *table;
	unsigned long int i;
	
	table = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
