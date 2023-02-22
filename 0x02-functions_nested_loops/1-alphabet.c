#include "main.h"
/**
 * print_alphabet - prints all lowercase letters
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
		_putchar('\n');
	}
}
