#include "main.h"
/**
 * string_nconcat - concatenates two stings
 *
 * @s1: Destination of string 
 * @s2: Source of string
 * @n: No. of bytes to concatenates of s2
 *
 * Return: Pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int a, b, i;
	unsigned int j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = strlen(s1);
	b = strlen(s2);
		ptr = malloc(sizeof(char) * (a + b) + 1);
		if (ptr == NULL)
			return (NULL);
		for (i = 0; i < a; i++)
			ptr[i] = s1[i];
		for (j = 0; j < n; j++)
		{
			ptr[i] = s2[j];
			i++;
		}
		ptr[i + 1] = '\0';
	return (ptr);
}
		

