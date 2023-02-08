#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element
 * else NULL if the key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *temp_node = NULL;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	temp_node = ht->array[i];

	while (temp_node)
	{
		if (strcmp(temp_node->key, key) == 0)
			return (temp_node->value);
		temp_node = temp_node->next;
	}

	return (NULL);
}
