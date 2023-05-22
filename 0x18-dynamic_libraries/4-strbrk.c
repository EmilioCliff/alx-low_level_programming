#include "main.h"
/**
 * _strbrk - Function that searches a string for first
 *			occurence of any set of byte.
 *
 * @s: the string we search for an occurence of byte
 * @accept: the string we look for characters for
 *			matching
 *
 * Return: return NULL if no byte is found
 *		return pointer to the byte if match is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return ('\0');
}
