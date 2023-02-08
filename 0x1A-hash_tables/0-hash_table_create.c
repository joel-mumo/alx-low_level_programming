#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array
 * Return: A pointer to the newly created hash table,
 * Otherwise, NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hst = NULL;
	unsigned long int i = 0;

	hst = malloc(sizeof(hash_table_t));
	if (hst)
	{
		hst->size = size;
		hst->array = malloc(sizeof(hash_node_t *) * size);
		if (!hst->array)
		{
			free(hst);
			return (NULL);
		}

		while (i < size)
		{
			hst->array[i] = NULL;
			i++;
		}
	}

	return (hst);
}
