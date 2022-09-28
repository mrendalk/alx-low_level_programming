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
	while(s[i] != '\0')
	{
		_puts(s[i]);
		i++;
	}
	return(s);
}
