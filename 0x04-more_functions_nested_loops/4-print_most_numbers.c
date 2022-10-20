#include "main.h"

void print_most_numbers(void)
{
    int x;

    x = '0';
    while (x <= '9')
    {
        if (x == '2' || x == '4')
            continue;
        _putchar(x);
        x++;
    }
    _putchar('\n');
}
