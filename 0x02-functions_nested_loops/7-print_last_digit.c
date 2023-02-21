#include "main.h"
/**
 * print_last_digit - it prints the last digit of a number
 * @last_digit: digit to be calculated
 * Return: x which is the last digit of the number
 */
int print_last_digit(int last_digit)
{
	int x;

	x = last_digit%10;
	_putchar(x);
	_putchar('\n');
	return (x);
}
