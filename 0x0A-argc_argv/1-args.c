#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints number of arguments passed to it
 *
 * @argc: Number of arguments passed to program
 * @argv: String passed to program
 * Return: Always return 0
 */
int main(int argc, char __attribute__((unused)) *argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
