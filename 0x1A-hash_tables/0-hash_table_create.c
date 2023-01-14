#include <stdlib.h>
#include <stdio.h>
#include "hash_table.h"

/**
 * hash_node_create - returns a hash table node
 * @key: the key
 * @value: the value
 * Return: The new node
 */
hash_node_t *hash_node_create(char *key, char *value)
{
        /* Creates a pointer to a new hash table node */
        hash_node_t *node = (hash_node_t *) malloc(sizeof(hash_node_t));

        node->key = (char *) malloc(strlen(key) + 1);
        node->value = (char *) malloc(strlen(value) + 2);

        strcpy(node->key, key);
        strcpy(node->value, value);

        return (node);
}
/**
 * hash_table_create - creates a hash table
 * @size: size of table
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
		table->array = NULL;

	return (table);
}
