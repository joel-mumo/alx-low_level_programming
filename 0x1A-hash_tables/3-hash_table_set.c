#include "hash_tables.h"

/**
 * hash_table_add - adds an element to the hash table when it doesn't exist
 * @key: the key
 * @new_value: duplicated value associated with the key
 * Return: the new node, else NULL
 */
hash_node_t *hash_table_add(const char *key, char *new_value)
{
	hash_node_t *new_node = NULL;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(new_value);
		return (NULL);
	}

	new_node->key = strdup(key);
	new_node->value = new_value;
	if (!new_node->key || !new_node->value)
	{
		if (new_node->key)
			free(new_node->key);
		free(new_value);
		return (NULL);
	}
	return (new_node);
}

/**
 * hash_table_set - adds or sets an element to the @ht hash table
 * @ht: The hash table you want to add or update the key/value to
 * @key: the key
 * @value: value associated with the key
 * Return: 1 on success, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new_node = NULL, *temp_node = NULL;
	char *new_value = NULL;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	temp_node = ht->array[i];

	new_value = strdup(value);
	if (!new_value)
		return (0);

	while (temp_node)
	{
		if (strcmp(temp_node->key, key) == 0)
		{
			free(temp_node->value);
			temp_node->value = new_value;
			break;
		}
		temp_node = temp_node->next;
	}

	if (!temp_node)
	{
		new_node = hash_table_add(key, new_value);
		if (!new_node)
			return (0);
		new_node->next = ht->array[i];
		ht->array[i] = new_node;
	}
	return (1);
}
