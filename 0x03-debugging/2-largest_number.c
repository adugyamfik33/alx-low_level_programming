#include "main.h"
int largest_number(int a, int b, int c)
{
    int greatest;

    if(a >= b && a >= c)
        greatest = a;
    else if (b >= a && b >= c)
        greatest = b;
    else
        greatest = c;

    return (greatest);
}
