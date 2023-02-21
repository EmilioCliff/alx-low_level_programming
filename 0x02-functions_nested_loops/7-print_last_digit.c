#include "main.h"
/**
 * print_last_digit - it prints the last digit of a number
 * @num: digit to be calculated
 * Return: x which is the last digit of the number
 */
int print_last_digit(int num)
{
	num = num % 10;
	_putchar(num + '0');
	_putchar('\n');
	return (num);
}
