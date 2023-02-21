#include "main.h"
/**
 * _isalpha - find if a c is a number then goes to find if it is uppercase or lowercase
 * @c: input data
 * Return: 1 if c is a letter, lowercase or uppercase otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

