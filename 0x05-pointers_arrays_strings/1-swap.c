#include "main.h"
/**
 * swap_int - swaps values of two integers
 *
 * @a: first value to be swaped
 * @b: second value to be swaped
 */
void swap_int(int *a, int *b)
{
	int *a = &a;
	int *b = &b;

	*a = b;
	*b = a;
}
