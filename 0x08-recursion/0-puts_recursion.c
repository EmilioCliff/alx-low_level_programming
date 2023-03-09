#include "main.h"
/**
 * _puts_recursion - prints out a string folllowed by a new line
 *
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	int i = 0;
	if (s[i] == '\0')
		return (_putchar(\n));

	_putchar(s[i]);
		i++;
		return (_put_recursion(s[i]));
}
