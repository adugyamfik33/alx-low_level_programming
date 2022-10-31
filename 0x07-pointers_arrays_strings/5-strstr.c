#include "main.h"

int _strncmp(char *s1, char *s2, unsigned int b)
{
	unsigned int x;

	for (x = 0;x <= b && *s1 == *s2 && *s1 != '\0' && *s2 != '\0'; x++)
	{
		s1++;
		s2++;
	}
	return (x - b);
}

char *_strstr(char *haystack, char *needle)
{
	unsigned int y;
	y = 0;

	while (needle[y] != '\0')
		y++;
	while (*haystack != '\0')
	{
		if (_strncmp(haystack, needle, y) == 0)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
