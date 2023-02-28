#include"main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
*/

void print_diagonal(int n)
{
	int rowno, colomno;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (colomno = 1; colomno <= n; ++colomno)
		{
			for (rowno = 1; colomno <= n; ++colomno)
			{
				if (rowno == colomno)
					putchar(92);
				else
					putchar(' ');
			}
			putchar('\n');
		}
	}
}
