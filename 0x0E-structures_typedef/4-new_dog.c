#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: string from main, name of the dog
 * @age: number from main, age of dog
 * @owner: string from main, owner of the dog
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	/* reserving memory to struct dog */

	p = malloc(sizeof(dog_t));

	if (p == NULL)
		return (NULL);

	/* copying name pointer*/

	if (name == NULL)
	{
		free(p);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(p);
		free(name);
		return (NULL);
	}
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
