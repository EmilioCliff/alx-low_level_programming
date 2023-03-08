#include "main.h"
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
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s);
		break;
		}
		else
			i++;
	}
	return (NULL);
}
