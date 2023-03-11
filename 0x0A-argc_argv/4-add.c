#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - prints addition of positive numbers 
 * digit - find if character is digit
 * @ch[]: string to check
 *
 * @argc: No of arguments passed to the program
 * @argv: String of arguments passed to the program
 *
 * Return: Return 0 if success
 *			Return 1 if no contains symbols
 */
int digit(char ch[]);
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (digit(argv[i]) == 1)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}

		}
		printf("%d\n", sum);
	}
	else
	{
	printf("0\n");
	}
	return (0);
}
/**
 * digit - find if character is digit
 *
 * @ch[]: string to check
 *
 * Return: 1 if string is digit
 *			0 if string is not digit
 */
int digit(char ch[])
{
	int i, l = strlen(ch);

	for (i = 0; i < l; i++)
	{
	if (!isdigit(ch[i]))
		return (0);
	}
	return (1);
}
