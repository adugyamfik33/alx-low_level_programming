#include <stdlib.h>
#include <stdio.h>
int main(void)
{
        int i,j;
        for(i=0;i<10;i++)
        {

            for(j=0;j<10;j++)
            {

                putchar('0'+i);

                putchar('0'+j);

                if(j == i && i==9)
                    continue;

                putchar(',');

                putchar(' ');

            }

        }

	return (0);

}
