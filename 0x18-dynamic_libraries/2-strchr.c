#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 *
 * @s: string to search for character
 * @c: character to be searched in string
 *
 * Return: return s if charachter is located
 *			return NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	int i;
	int b = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			while (s[i] != '\0')
			{
			s[b] = s[i];
			}
			break;
		}
	}
	if (s[b] == s[i])
		return (s);
	else
		return (NULL);
}
