#include "main.h"
/**
 * _memcpy - function that copies memory area
 *
 * @dest: The destination where n bytes should be copied
 * @src: The source or character to be copied
 * @n: number of bytes to be copied
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
