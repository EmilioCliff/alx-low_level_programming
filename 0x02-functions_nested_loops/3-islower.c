#include "main.h"
#include <ctype.h>
/**
 * _islower - searches for lowercase in a character
 * @c: takes the character to be searched
 *
 * Return: 1 if c is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
