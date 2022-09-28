#include "main.h"
/**
 * main - check the code
 * @s - argument
 * _puts_recursion - function
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	_putchar('%s', *(s + i));

	if(*(s + i) != '0')
	{
		_putchar('%s', *(s + i));
	}
}
