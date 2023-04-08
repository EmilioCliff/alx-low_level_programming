#include "main.h"
/**
 * get_bit - finds a bit at a given index
 * @n: the number to find a bit from
 * @index: where we want to get the bit
 * Return: value of the index on success
 *			-1 if an error occour
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0;
	unsigned long int temp = n;

	while (temp)
	{
		count++;
		temp >>= 1;
	}
	if (index < count)
		return (((1 << index) & n) >> index);
	else
		return (-1);
}
