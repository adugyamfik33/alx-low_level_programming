#include <stdio.h>
#include "main.h"
void print_to_98(int x)
{
    int i;

    if (x < 98)
    {
        for (i = x; i < 98; i++)
            printf("%d, ", i);
        printf("98\n");
    }
    else
    {
        for (i = x; i > 98; i--)
            printf("%d, ", i);
        printf("98\n");
    }
}
