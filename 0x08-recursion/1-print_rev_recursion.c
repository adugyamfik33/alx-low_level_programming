#include "main.h"
/**
 * _print_rev_recursion - prints out a string in reverse
 * @s: the intended string to be printed
 * Return: N/A
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s+1);
		_putchar(*s);
	}
}
