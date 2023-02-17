#include <stdio.h>
/*
*main - Program that prints alphabets in lowercase
*Return: 0
*/
int main(void)
{
	int i;

	for(i=97; i<=122; i++)
{
	putchar("%c", i);
}
	return(0);
}
