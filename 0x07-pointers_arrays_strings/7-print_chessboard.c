#include "main.h"
/**
 * print_chessboard - function that prints chessboard
 *
 * @a: elements in the array to be printed
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	j = 0;
	while (i < 64)
	{
		if (i % 8 == 0 && i != 0)
		{
			j = i;
			_putchar('\n');
		}

		_putchar(a[i \ 8][i - j];

				i++;
	}
	_putchar('\n');
}
