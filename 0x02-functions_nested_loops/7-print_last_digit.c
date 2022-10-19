#include "main.h"
int print_last_digit(int n)
{
	int x;
	x =_abs(n) % 10;
	_putchar(x+'0');
	return (x);
}
