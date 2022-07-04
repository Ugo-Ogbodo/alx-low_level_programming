#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: struct parameter
 * @age: struct parameter
 * @owner: struct owner
 *
 * Return: pointer to dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int count, i, j;
	dog_t *dog;

	count = 0;
	i = 0;

	while (name[count++])
		;
	while (owner[i++])
		;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(len * sizeof(dog->name));
	if (dog == NULL)
		return (NULL);
	j = 0;
	while (j < count)
	{
		dog->name[j] = name[j];
		j++;
	}
	dog->age = age;
	dog->owner = malloc(i * sizeof(dog->owner));
	if (dog == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		dog->owner[j] = owner[j];
		j++
	}
	return (dog);
}
