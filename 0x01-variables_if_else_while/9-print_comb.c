#include <stdlib.h>

int main(void)

{

        for(int i=0;i<10;i++)

        {

            putchar('0'+i);

            if(i == 9)

                continue;

            putchar(',');

            putchar(' ');

        }



        putchar('\b\b');

	return (0);

}
