#include "main.h"
/**
 * len1 - finds length of string 1
 * @s1: string to find lenght
 * Return: lenght of s1
 */
int len1(char *s1)
{
	int i = 0;

	while (s1[i] != '\0')
		i++;
	return (i);
}
/**
 * len2 - finds lenght of string 2
 * @s2: string to find lenght
 * Return: length of s2
 */
int len2(char *s2)
{
	int j = 0;

	while (s2[j] != '\0')
		j++;
	return (j);
}
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
	a = len1(s1);
	b = len2(s2);
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
