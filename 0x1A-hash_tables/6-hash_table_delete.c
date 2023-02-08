#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp_node = NULL;
	unsigned long int i = 0;

	if (ht)
	{
		while (i < ht->size)
		{
			while (ht->array[i])
			{
				temp_node = ht->array[i];
				ht->array[i] = ht->array[i]->next;

				if (temp_node->value)
					free(temp_node->value);
				if (temp_node->key)
					free(temp_node->key);
				free(temp_node);
			}
			free(ht->array[i]);
			i++;

		}
		free(ht->array);
		free((void *)ht);
	}
}
