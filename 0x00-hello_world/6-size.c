#include <stdio.h>
int main(void)
{
int intType;
char charType;
float fltType;
long long int lliType;
long int liType;
printf("Size of a char: %zu byte(s)",sizeof(charType));
printf("Size of an int: %zu byte(s)",sizeof(intType));
printf("Size of a long int: %zu byte(s)",sizeof(liType));
printf("Size of a long long int: %zu byte(s)",sizeof(lliType));
printf("Size of a float: %zu byte(s)",sizeof(fltType));
return (0);
}
