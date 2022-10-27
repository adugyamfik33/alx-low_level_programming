#include "main.h"

char *string_toupper(char *string)
{
	int i = 0;

	while(string[i])
	{
		if(string[i] >= 'a' && string[i] <= 'z')
		{
			string[i] -= 32;
		}
		i++;
	}

	return (string);
}
