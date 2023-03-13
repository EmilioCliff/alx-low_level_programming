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
	int l1, l2, i, j, totlen;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s1 == NULL)
		s2 = "";

	l1 = strlen(s1);
	l2 = strlen(s2);
	totlen = l1 + l2 + 1;
	ptr = malloc(sizeof(char) * totlen);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < l2; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[totlen] = '\0';

	return (ptr);
}
