#include "main.h"

char *_strpbrk(char *s, char *accept)
{
	unsigned int x;

	while (*s != '\0')
	{
		for (x = 0;accept[x] != '\0';x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return (0);
}
