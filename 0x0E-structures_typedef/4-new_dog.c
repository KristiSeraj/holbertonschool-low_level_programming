#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int i, l;

	for (i = 0; name[i] != '\0'; i++)
		l++;
	for (i = 0; owner[i] != '\0'; i++)
		l++;
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	my_dog->name = malloc(sizeof(char) * (l + 1));
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->owner = malloc(sizeof(char) * (l + 1));
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	my_dog->age = age;
	for (i = 0; name[i] != '\0'; i++)
		my_dog->name[i] = name[i];
	my_dog->name[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
		my_dog->owner[i] = owner[i];
	my_dog->owner[i] = '\0';
	return (my_dog);
}
