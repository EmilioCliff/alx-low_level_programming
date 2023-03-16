#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: No. of elements in the array
 * @size: size of each element in the array
 *
 * Return: NULL if nmemb or size is zero or malloc fails
 *		pointer to memory allocated on Success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		ptr[i] = 0;
	return (ptr);
}
