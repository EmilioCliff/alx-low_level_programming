#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 *main - Entry point
 *Description- Prints the last digit of a random number
 *Return: Always 0
 */
int main (void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/*my code*/
	int last_num;
	last_num=n%10;
	if(last_num>5)
		printf("Last digit of %d and is greater than 5\n", n);
	else if(last_num<6 && last_num!=0)
			printf("Last digit of %d and is less than 6 and not 0\n", n)
	else 
			printf("Last Digit of %d and is 0\n", n)
}
{
	printf("Last digit of %d and is less than 6 and not 0\n", n);
}
	else 
{
	printf("Last digit of %d and is 0", n);
}
	return(0);
} 
