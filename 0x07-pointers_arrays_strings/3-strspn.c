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
	int a, b, count;

	count = 0;
	b = 0;
	for (a = 0; s[a] != ' '; a++)
	{
		for (b = 0; s[b] != '\0'; b++)
		{
			if (s[a] == s[b])
				count++;
		}
	}
	return (count);
}
