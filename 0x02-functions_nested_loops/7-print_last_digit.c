#include "main.h"
/**
 * print_last_digit - it prints the last digit of a number
 * @num: digit to be calculated
 * Return: x which is the last digit of the number
 */
int print_last_digit(int num)
{
	int last_digit;

	if (num < 0)
	{
	last_digit = ((-1) * num % 10);
	}
	else
	{
		last_digit = num % 10;
	}
	_putchar(last_digit + '0');
	_putchar('\n');
	return (last_digit);
}
