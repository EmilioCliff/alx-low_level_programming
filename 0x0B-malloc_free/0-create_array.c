#include "main.h"
/**
 * create_array - creates an array of chars
 *				and initializes it with a specific char
 *
 * @size: size of array to create
 * @c: character to initialize
 *
 * Return: Returns NULL if size = 0
 *			Returns a pointer to the array
 *			or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(c) * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
