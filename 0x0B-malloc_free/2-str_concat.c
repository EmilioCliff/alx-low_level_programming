#include "main.h"
/**
 * str_concat - concatenates two string
 *
 * @s1: string to be concatenated to
 * @s2: string to add to another string
 *
 * Return: NULL if failure
 *		pointer if success
 */
char *str_concat(char *s1, char *s2)
{
	int l1, l2, i;
	char *ptr;

	l1 = strlen(s1);
	l2 = strlen(s2);
	ptr = malloc(sizeof(char) * (l1 + l2 + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < l2; i++)
	{
		s1[l1 + i + 1] = s2[i];
	}
	for (i = 0; i < (l1 + l2 + 1); i++)
	{
		ptr[i] = s1[i];
	}
	return (ptr);
}
