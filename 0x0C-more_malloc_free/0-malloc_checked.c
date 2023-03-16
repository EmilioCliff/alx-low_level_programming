#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size of memory to allocate
 *
 * Return: on success return pointer to the allocated memory
 *			otherwise return 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
