#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 char
 * Return: converted number on success
 *			0 if b is NULL or the string has extra number that are not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned digit = 0;
	int power = 1;
	int length = 0;

	if (b == NULL)
		return (0);
	while (b[length] != '\0')
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
		length++;
	}
	length--;
	while (length >= 0)
	{
		digit = digit + (b[length] - '0')*power;
		power = power * 2;
		length--;
	}
	return (digit);
}
