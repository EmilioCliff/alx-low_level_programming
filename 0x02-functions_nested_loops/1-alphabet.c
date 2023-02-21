#include "main.h"
/**
 * print_alphabet - prints all lowercase letters
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		_putchar('\n');
	}
}
