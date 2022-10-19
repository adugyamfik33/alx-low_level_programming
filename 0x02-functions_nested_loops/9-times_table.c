#include "main.h"
void times_table(void)
{
	int i, j, k, l, n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			n = i * j;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (n > 9)
			{
				k = n / 10 + '0';
				l = n % 10 + '0';

				_putchar(k);
				_putchar(l);
			}
			else
			{
				_putchar(' ');
				_putchar(n + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
