#include <stdlib.h>

int main(void)

{

    int z =122,y=90,x;

        for(x = 97;x<=z;x++)

        {

            if(x == 101 || x == 113)

                continue;

            putchar(x);

        }

        putchar('\n');

	return (0);

}
