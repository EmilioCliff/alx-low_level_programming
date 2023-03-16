#include "main.h"
#include <stdlib.h>

/* Helper function to calculate the total length of the concatenated string,
 * including newline characters and the null-terminating character.
 */
int get_total_len(int ac, char **av)
{
    int total_len = 0;
    int i, j;
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            total_len++;
        }
        total_len++; /* Adding 1 for the newline character */
    }
    total_len++; /* Adding 1 for the null-terminating character */
    return total_len;
}

/* Function that concatenates all arguments of the program, 
 * with each argument followed by a newline character.
 */
char *argstostr(int ac, char **av)
{
	char *result;
	int i, j, pos;
    /* Check if ac equals 0 or av is NULL, and return NULL accordingly */
    if (ac == 0 || av == NULL)
    {
        return NULL;
    }

    /* Allocate memory for the concatenated string using malloc */
    pos = 0;
    result = malloc(get_total_len(ac, av) * sizeof(char));
    if (result == NULL)
    {
        return NULL;
    }
    
    /* Iterate through each argument */
    for (i = 0; i < ac; i++)
    {
        /* Iterate through each character in the argument */
        for (j = 0; av[i][j] != '\0'; j++)
        {
            /* Copy each character to the result string */
            result[pos++] = av[i][j];
        }
        /* Add a newline character after each argument */
        result[pos++] = '\n';
    }
    /* Add the null-terminating character at the end of the result string */
    result[pos] = '\0';

    return result;
}
