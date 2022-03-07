#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print struct dog
 * @d: pointer to dog
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: %s\n", "(nil)");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: %s\n", "(nil)");
	else
		printf("Owner: %s\n", d->owner);

	if (d == NULL)
		return;
}
