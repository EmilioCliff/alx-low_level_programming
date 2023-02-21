#include "main.h"
/**
 * jack_bauer - prints every minutes of the day
 *
 */
void jack_bauer(void)
{
	int a, b, c, d;

	a = 0;
	while (a <= 2)
	{
		b = 0;
		while (b <= 3)
		{
			c = 0;
				while (c <= 5)
				{
					d = 0;
					while (d <= 9)
					{
						_putchar('a');
						_putchar('b');
						_putchar(':');
						_putchar('c');
						_putchar('d');
						d++;
					}
					_putchar('a');
					_putchar('a');
					_putchar('a');
					_putchar('a');
					_putchar('a');
					c++;
				}
						_putchar('a');
						_putchar('b');
						_putchar(':');
						_putchar('c');
						_putchar('d');

				b++;
		}
					_putchar('a');
					_putchar('b');
					_putchar(':');
					_putchar('c');
					_putchar('d');
a++;
}
}
