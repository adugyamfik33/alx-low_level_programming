#include "main.h"

void reverse_array(int *a, int n)
{
	int i, temp;

	for(i = n-1; i >= n/2; i--)
	{
		temp = a[n - i - 1];
		a[n - i - 1] = a[i];
		a[i] = temp;
	}
}
