#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct dog
 * @name: name
 * @age: age
 * @owner: owner
 * Description: This struct is for dog
 */

struct dog
{
	char *dog;
	float age;
	char *owner;
};

typedef dog dog_s;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_s *new_dog(char *name, float age, char *owner);
void free_dog(dog_s *d);

#endif
