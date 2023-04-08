#include "main.h"
/**
 * set_bit - sets a value of abit to 1 at a givene index
 * @n: pointer to the number
 * @index: where to change the bit
 * Return: 1 if it successful
 *			-1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int count;

	count = (sizeof(*n) * 8);
	if (index < count)
	{
		*n = ((1 << index) | *n);
		return (1);
	}
	else
		return (-1);
}

