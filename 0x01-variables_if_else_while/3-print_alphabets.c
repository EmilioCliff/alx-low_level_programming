#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';
#include <stdio.h>
/*
*main - Program that prints lowercase then uppercase alphabets
*Return: o
*/
int main(void)
{
	int i, m;

	i=97;
	m=65;
	for(i=97; i<=122; i++)
{
	putchar("%c", i);
}
		
	for(m=65; i<=90; m++)
{
	putchar("%c", m);
}
	return(0);
}
	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}

	/*print A - Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		++CH;
	}
	putchar('\n');

	return (0);
}
