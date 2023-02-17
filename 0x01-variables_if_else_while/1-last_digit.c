#include <stdlib.h>
#include <stdio.h>
/*
*main - Print the last digit of a random number
*Return: 0
*/
int main (void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last_num;
	last_num=n%10;
	if(last_num>5)
{
	printf("Last digit of %d and is greater than 5\n", n);
}
	else if(0<n<6)
{
	printf("Last digit of %d and is less than 6 and not 0\n", n);
}
	else 
{
	printf("Last digit of %d and is 0", n);
}
	return(0);
} 
