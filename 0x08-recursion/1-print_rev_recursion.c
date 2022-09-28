#include "main.h"
/**
* _print_rev_recursion - prints's a string followed
* @s: string to be a printed
* Return: void
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
