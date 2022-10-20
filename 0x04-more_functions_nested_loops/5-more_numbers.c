#include "main.h"

void more_numbers(void)
{
	int i, j, x;

	for (i = 0; i < 10; i++)
	{
		for (j = 0, x = 0; j < 15; j++, x++)
		{
			if (j > 9)
			{
				_putchar('1');
				x = j % 10;
			}
			_putchar(x + '0');
		}
		_putchar('\n');
	}
}
