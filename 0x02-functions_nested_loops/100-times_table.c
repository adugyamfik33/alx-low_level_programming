#include "main.h"
void print_nums(int n)
{
int a, b, c;

if (n > 99)
{
a = n / 100 + '0';
b = n / 10 % 10  + '0';
c = n % 10 + '0';

_putchar(' ');
_putchar(a);
_putchar(b);
_putchar(c);
}
else if (n > 9)
{
a = n / 10 + '0';
b = n % 10 + '0';

_putchar(' ');
_putchar(' ');
_putchar(a);
_putchar(b);
}
else
{
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(n + '0');
}
}

void print_times_table(int n)
{
int i, j, numb;

if (n >= 0 && n < 16)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
numb = i * j;

if (j == 0)
	_putchar('0');
else
	print_nums(numb);
if (j < n)
	_putchar(',');
else
	_putchar('\n');
}
}
}
}
