#include "main.h"
#include "_putchar.c"
/**
 * main - prints the name it's called with
 * @argc: Number of arguments passed to program
 * @argv: Array of strings passed to program
 * Return: on succes 0
 * on error -1
 */
int main(int argc, char *argv[])
{
	char *ch = argv[0];
	int i = 0;

	while (ch[i] != '\0')
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
