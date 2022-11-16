#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds the length of a string
 * @str: the string
 * Return: Length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - copies a string
 * @dest: destination
 * @src: source
 * Return: Pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int d = 0;

	for (d = 0; src[d]; d++)
		dest[d] = src[d];

	dest[d] = '\0';

	return (dest);
}

/**
 * new_dog - a new dog
 * @name: Dog name
 * @age: Age of dog
 * @owner: owner of dog
 * Return: new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *conny;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	conny = malloc(sizeof(dog_t));
	if (conny == NULL)
		return (NULL);

	conny->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (conny->name == NULL)
	{
		free(conny);
		return (NULL);
	}

	conny->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (conny->owner == NULL)
	{
		free(conny->name);
		free(conny);
		return (NULL);
	}

	conny->name = _strcopy(conny->name, name);
	conny->age = age;
	conny->owner = _strcopy(conny->owner, owner);

	return (conny);
}
