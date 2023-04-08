#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: the point where the bit is changed to 0
 * Return: 1 if it successful
 *			-1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int count;
	unsigned long int temp;

	count = (sizeof(*n) * 8);
	if (index < count)
	{
		temp = ~(1 << index);
		*n = *n & temp;
		return (1);
	}
	else
		return (-1);
}
