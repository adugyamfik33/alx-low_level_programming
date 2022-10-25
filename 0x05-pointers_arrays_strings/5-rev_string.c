#include <stdio.h>
#include "main.h"

void rev_string(char *s)
{
	int x, y;

	x =0;
	y =0;
	char stemp[1024];

	while (*(s + x))
	{
		*(stemp + x) = *(s + x);
		x++;
	}
    x--;
	while (x >= 0)
	{
		*(s + x) = *(stemp + y);
		x --;
		y++;
	}
}
