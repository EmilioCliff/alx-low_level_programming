#include "main.h"
/**
 * _puts_recursion - prints out a string folllowed by a new line
 *
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*s);
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
