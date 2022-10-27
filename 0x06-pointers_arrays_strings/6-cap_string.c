#include "main.h"

char *cap_string(char *string)
{
	int n = 0;

	while(string[n])
	{
		while(!(string[n] >= 'a' && string[n] <= 'z'))
			n++;

		if(string[n - 1] == ' ' || string[n - 1] == '\t' || string[n - 1] == '\n' || string[n - 1] == ',' || string[n - 1] == ';' || string[n - 1] == '.' || string[n - 1] == '?' || string[n - 1] == '!' || string[n - 1] == '"' || string[n - 1] == '}' || string[n - 1] == '{' || string[n - 1] == '!' || string[n - 1] == '(' || string[n - 1] == ')' || n == 0)
			string[n] = 32;

		n++;
	}

	return (string);
}
