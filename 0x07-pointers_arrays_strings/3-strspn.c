#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string to check the lenght
 * @accept: string where characters are checked from
 *
 * Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, c, d, e;

	a = 0;
	b = 0;
	while (s[a] != '\0')
		a++;
	while (accept[b] != '\0')
		b++;
	for (c = o; c < a; c++)
	{
		for (d = 0; d < b; d++)
		{
			if (s[c] == accept[d])
				e++;
			}
	}
	return (e);
}
