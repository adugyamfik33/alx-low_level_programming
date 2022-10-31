#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i, sum_x, sum_y;
	sum_x = sum_y = 0;

	for (i = 0; i < (size * size); i += size + 1)
		sum_x += a[i];

	for (i = size - 1; i < (size * size - 1); i += size - 1)
		sum_y += a[i];
	printf("%d, %d\n", sum_x, sum_y);
}
