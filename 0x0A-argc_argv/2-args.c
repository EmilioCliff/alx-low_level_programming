#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints all arguments it receives
 *
 * @argc:number of arguments passed to program
 * @argv: string of arguments passed to program
 *
 * Return: always 0
 */
int main(int argc, char *argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
