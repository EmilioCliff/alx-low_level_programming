#include "dog.h"
/**
 * free_dog - frees memory allocated by malloc
 * @d: pointer to memory to free
 */
void free_dog(dog_t *d)
{
	free((dog_t *)d);
}
