#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: string to be printed on
 * @b: the character to be printed
 * @n: number of bytes of the memory
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;

	}
	return (s);
}
