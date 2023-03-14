#include "main.h"
/**
 * alloc_grind - returns a pointer to a 2 dimensional array of integers
 * @width: the no of colomn of the 2D array
 * @height: the no of rows of the 2D array
 *
 * Return: NULL on failure
 *			pointer to a 2D array of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;
	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			while (i >= 0)
			{
			free(ptr[i]);
			i--;
			}
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}

