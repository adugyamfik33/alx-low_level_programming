#include "main.h"

char *cap_string(char *string)
{
	int i = 0;

	while(string[i])
	{
		while(!(string[i] >= 'a' && string[i] <= 'z'))
			i++;

		if(string[n - 1] == ' ' || string[n - 1] == '\t' || string[n - 1] == '\n' || string[n - 1] == ',' || string[n - 1] == ';' || string[n - 1] == '.' || string[n - 1] == '?' || string[n - 1] == '!' || string[n - 1] == '"' || string[n - 1] == '}' || string[n - 1] == '{' || string[n - 1] == '!' || string[n - 1] == '(' || string[n - 1] == ')' || i == 0)
			string[i] = 32;

		i++;
	}

	return (string);
}
