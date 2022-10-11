#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - assigns new dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: return the address of the new structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name = 0, len_owner = 0, i;

	 dog_t *new_dog = NULL;

	while (name[len_name] != '\0')
		len_name++;
	while (owner[len_owner] != '\0')
		len_owner++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(len_name + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(len_owner + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= len_name; i++)
		new_dog->name[i] = name[i];
	for (i = 0; i <= len_owner; i++)
		new_dog->owner[i] = owner[i];
	new_dog->age = age;
	return (new_dog);
}
