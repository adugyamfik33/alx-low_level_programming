#include "main.h"
#include <stdio.h>
void jack_bauer(void)
{
	int i, j;
	for(i = 0;i < 24;i++)
	{	
		for(j = 0;j < 60;j++)
		{
			printf("%d",i);
			if(i < 10)
			{
			printf("%d",i);
			}
		_putchar(':');
	        printf("%d",j);
		if(j < 10)
		{
		_putchar(j+'0');
		}
	_putchar('\n');
		}
	}
}	

