#include "main.h"
/**
 * main - prints the name it's called with
 * @argc: Number of arguments passed to program
 * @argv: Array of strings passed to program
 * Return : on succes 0
 * on error -1
 */
int main(int argc, char *argv)
{
	int i;
	
	for (i = 0; i <= argc; i++)
	{
		_putchar(*argv[i])
	}
	return (0);
}
