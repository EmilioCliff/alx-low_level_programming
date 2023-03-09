#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a
 *					a square matrix of integers
 *
 * @size: the size of the square matrixs
 * @a: the two dimension array to print sum of diagonals
 *
 */
void print_diagsums(int *a, int size)
{
	int sum, b, c;

	for (b = 0; b < size; b++)
	{
		for (c = 0; c < size; c++)
		{
			if (b == c)
			{
			sum = sum + a[b][c];
			printf("%d ", sum);
			}
		}
	}
}


