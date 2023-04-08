#include "main.h"
/**
 * flip_bits - find number of bits needed to flip to get another number
 * @n: number to find how many bits is needed to be fliped
 * @m: the number to be get after n if flipped
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int new;

	new = n ^ m;
	while (new)
	{
		count++;
		new &= (new - 1);
	}
	return (count);
}
