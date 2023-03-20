#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: pointer to dog to free
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
