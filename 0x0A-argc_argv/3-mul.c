#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two number
 *
 * @argc: number of arguments received
 * @argv: string of arguments received
 *
 * Return: return 0 if success
 *			return 1 if error
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
