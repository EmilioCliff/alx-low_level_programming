#include <stdio.h>
/**
 * main - Prints alphabet in lower then uppercase
 *
 * Return: 0
 */
int main(void)
{
		char ch = 'a';
		char CH = 'A';

		while (ch <= 'z')
		{
			putchar (ch);
			ch++;
		}
		while (CH <= 'Z')
		{
			putchar (CH);
			CH++;
		}
		return (0);
}
