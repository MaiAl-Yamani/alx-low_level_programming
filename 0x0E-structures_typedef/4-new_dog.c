#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: a pointer new dog of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len_name = 0, len_owner = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[len_name++])
		;
	while (owner[len_owner++])
		;

	new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(len_name * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	/*strcpy(new_dog->name, name);*/
	for (i = 0; i < len_name; i++)
		new_dog->name[i] = name[i];

	new_dog->age = age;

	new_dog->owner = malloc(len_owner * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	/*strcpy(new_dog->owner, owner);*/
	for (i = 0; i < len_owner; i++)
		new_dog->owner[i] = owner[i];
	return (new_dog);
}
