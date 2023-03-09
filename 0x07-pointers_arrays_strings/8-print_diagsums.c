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
	int c, b;

	for (c = 0; c < size; c++)
	{
		flag = 0;
		for (b = 0; b < size; b++)
		{
			if (b == c)
			{
				flag = 1;
				a += a[c][b];
				break;
			}
			if (flag == 1)
				break;
		}
	}
}
