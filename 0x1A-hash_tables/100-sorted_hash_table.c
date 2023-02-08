#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table
 * @size: the size of the array
 * Return: the newly created hash_table,
 * else NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_ht = NULL;
	unsigned long int i = 0;

	new_ht = malloc(sizeof(shash_table_t));
	if (new_ht)
	{
		new_ht->size = size;
		new_ht->array = malloc(sizeof(shash_node_t *) * size);
		if (!new_ht->array)
		{
			free(new_ht);
			return (NULL);
		}

		while (i < size)
		{
			new_ht->array[i] = NULL;
			i++;
		}
		new_ht->shead = NULL;
		new_ht->stail = NULL;
	}
	return (new_ht);
}

/**
 * insert_node - handles the add,append and insert of nodes in linked list
 * @ht: the hash table to add the key/value to
 * @new_node: newly created node to insert
 */
void insert_node(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *temp_node = NULL, *head = NULL;

	new_node->snext = NULL;
	new_node->sprev = NULL;
	if (!ht->shead && !ht->stail)
	{
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(new_node->key, ht->shead->key) <= 0)
	{
		new_node->snext = ht->shead;
		new_node->snext->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		head = ht->shead;
		while (head->snext && strcmp(new_node->key, head->snext->key) > 0)
			head = head->snext;
		new_node->snext = head->snext;
		new_node->sprev = head;
		temp_node = head->snext;
		head->snext = new_node;
		if (!temp_node)
			ht->stail = new_node;
		else
			temp_node->sprev = new_node;
	}
}

/**
 * shash_table_add - adds element to the @ht hash table when it doesn't exist
 * @ht: the hash table to add the key/value to
 * @key: the key (cannot be empty)
 * @value: duplicated value associated with the key
 * Return: the new node on success, else NULL
 */
shash_node_t *shash_table_add(shash_table_t *ht, const char *key, char *value)
{
	shash_node_t *new_node = NULL;

	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
	{
		free(value);
		return (NULL);
	}
	new_node->key = strdup(key);
	new_node->value = value;
	if (!new_node->key || !new_node->value)
	{
		if (new_node->key)
			free(new_node->key);
		free(value);
		return (NULL);
	}
	insert_node(ht, new_node);
	return (new_node);
}

/**
 * shash_table_set - adds or sets an element to the @ht hash table
 * @ht: the hash table to add or update the key/value to
 * @key: the key
 * @value: value associated with the key
 * Return: 1 on success, else 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	shash_node_t *new_node = NULL, *temp_node = NULL;
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
		new_node = shash_table_add(ht, key, new_value);
		if (!new_node)
			return (0);
		new_node->next = ht->array[i];
		ht->array[i] = new_node;
	}
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: the hash table to look into
 * @key: the key to looking for
 * Return: the value associated with the element,
 * else NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int i;
	shash_node_t *temp_node = NULL;

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

/**
 * shash_table_print - prints a hash table
 * @ht: the hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp_node = NULL;
	char *cm = "";

	if (ht)
	{
		printf("{");
		temp_node = ht->shead;

		while (temp_node)
		{
			printf("%s", cm);
			cm = ", ";

			if (temp_node->key)
				printf("'%s': '%s'", temp_node->key, temp_node->value);

			temp_node = temp_node->snext;
		}
		printf("}\n");
	}
}

/**
 * shash_table_print_rev - rev prints a hash table
 * @ht: the hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp_node = NULL;
	char *cm = "";

	if (ht)
	{
		printf("{");
		temp_node = ht->stail;

		while (temp_node)
		{
			printf("%s", cm);
			cm = ", ";
			if (temp_node->key)
				printf("'%s': '%s'", temp_node->key, temp_node->value);
			temp_node = temp_node->sprev;
		}
		printf("}\n");
	}
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: the hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp_node = NULL;
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
