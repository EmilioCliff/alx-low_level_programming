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
	int a, b, c;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		c = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				c = 1;
			break;
			}
		b++;
		}
		if (c == 0)
			break;
		a++;
	}
	return (a);
}
