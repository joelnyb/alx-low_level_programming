#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees malloc
 * @d: d is the structure pointer
 * Return : void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
