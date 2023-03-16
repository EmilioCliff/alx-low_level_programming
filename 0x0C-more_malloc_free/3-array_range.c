#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: First elements of the array
 * @max: Second elements of the array
 * Return: NULL if min > max or the malloc fails
 *		pointer to newly created array on Succuss
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
