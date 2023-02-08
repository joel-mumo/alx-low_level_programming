#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp_node = NULL;
	unsigned long int i = 0;
	char *cm = "";

	if (ht)
	{
		printf("{");
		while (i < ht->size)
		{
			temp_node = ht->array[i];

			while (temp_node)
			{
				printf("%s", cm);
				cm = ", ";

				if (temp_node->key)
					printf("'%s': '%s'", temp_node->key, temp_node->value);

				temp_node = temp_node->next;
			}
			i++;
		}
		printf("}\n");
	}
}
