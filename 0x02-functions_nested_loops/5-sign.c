#include "main.h"
/**
 * print_sign - prints if a number is positve, zero or negative
 *
 * @n: number to be checked
 * Return: 1 if number is positive, 0 if number is zero, othewise 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
