#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints natural number from n to 98
 * n: the beginning point
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		printf("%d, ", n);
	while (n < 98)
	{
		printf("%d, ", (n + 1));
	}
	printf("98");
	}
	else if (n > 98)
	{
		printf("%d, ", n);
		while (n > 98)
		{
			printf("%d, ", (n - 1));
		}
	}
		printf("98");
		else 
		{
			printf("%d", n);
		}
}
