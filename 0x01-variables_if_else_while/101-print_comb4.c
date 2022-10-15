#include <stdlib.h>
#include <stdio.h>
int main(void)
{

        for(int i=0;i<8;i++)

        {

            for(int j=0;j<9;j++)

            {

                for(int k=0;k<10;k++)

                {

                    if(i == j || j == k || i == k)

                        continue;

                    putchar('0'+i);

                    putchar('0'+j);

                    putchar('0'+k);

                    if(i == 7 && j == 8 && k == 9)

                        continue;

                    putchar(',');

                    putchar(' ');

                }

            }

        }

	return (0);

}
