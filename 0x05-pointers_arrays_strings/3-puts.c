#include "main.h"
/**
 * _puts - prints a string followed by a new line
 *
 * @str: string to be printed
 *
 */
void _puts(char *str)
{
	int count = 0;

	while (str[count])
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
