#include "main.h"
/**
 * _strdup - returns a pointer to anewly allocated space in memory
 *			which contaions a copy of a string given in parameter
 *
 * @str: string to copy to new memory
 *
 * Return: On success returns a pointer to the duplicate string
 *		NULL if memory was insufficient
 */
char *_strdup(char *str)
{
	int i = 0;
	char *ptr;
	int l;

	if (str == NULL)
		return (NULL);

	l = strlen(str);
	ptr = malloc(sizeof(char) * (l + 1));
	if (ptr == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
