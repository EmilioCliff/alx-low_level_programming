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

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(str));
	if (ptr == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	free(ptr);
	return (ptr);
}
