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
	char **ch;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ch = s;
		break;
		}
	if (ch == s)
		return (ch);
	else
		return (NULL);
}
