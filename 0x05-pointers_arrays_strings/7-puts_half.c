#include "main.h"

void puts_half(char *str)
{
	int x, n, mid;
	int y = 0;

	while (str[y] != '\0')
	{
		y++;
	}
	mid = y / 2;
	n = (y - 1) / 2;
	if (y % 2 == 1)
	{
		for (x = n + 1; x < y; x++)
		{
			_putchar(str[x]);
		}
	}
	else
	{
		for (x = mid; x < y; x++)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
