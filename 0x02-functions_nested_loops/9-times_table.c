#include "main.h"
/**
 * times_table - create a 9 timestable
 * 
 */
void times_table(void)
{
	int a, b, c;
		
	a = 0;
	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			c = (b * a);
			_putchar(c);
			_putchar(',');
			_putchar(' ');
			b++;
			
		}
		_putchar('\n');
		a++
	}
}

