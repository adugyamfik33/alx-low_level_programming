#include <stdlib.h>
#include <stdio.h>
int main(void)
{
 b      int i;
        for(i=0;i<10;i++)
        {

            putchar('0'+i);

            if(i == 9)

                continue;

            putchar(',');

            putchar(' ');

        }

	return (0);

}
