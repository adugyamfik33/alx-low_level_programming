#include <stdlib.h>
#include <stdio.h>
int main(void)
{

        for(int i=0;i<10;i++)

        {

            for(int j=0;j<10;j++)

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
