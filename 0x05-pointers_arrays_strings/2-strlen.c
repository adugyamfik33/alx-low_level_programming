#include <stdio.h>
#include "main.h"

int _strlen(char *s)
{
	char letter;
	int x;

	x = 0;
	letter = *(s + x);

	while (letter != '\0')
	{
		x++;
		letter = *(s + x);
	}
	return (x);
}
