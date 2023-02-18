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
