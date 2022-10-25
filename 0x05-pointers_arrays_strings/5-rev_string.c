#include <stdio.h>
#include "main.h"

void rev_string(char *s)
{
	int x, y;

	x =0;
	y =0;
	char s_temp[1024];

	while (*(s + x))
	{
		*(s_temp + x) = *(s + x);
		x++;
	}
    x--;
	while (x >= 0)
	{
		*(s + x) = *(s_temp + y);
		x --;
		y++;
	}
}
