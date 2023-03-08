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
char *_strbrk(char *s, char *accept)
{
	int a, b, c, d;

	a = 0;
	b = 0;
	d = 0;
	while (s[d] != '\0')
		d++;
	while (s[a] != '\0')
	{
		c = 0;
		while (accept[c] != '\0')
		{
			if (s[a] != accept[c])
				c++;
			else
				b = 1;
		}
		if (b == 1)
			break;
	else
			a++;
	}
	if (b == 0)
		return (NULL);
	else
		return (s);
}
