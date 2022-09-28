#include "main.h"
/**
* _pow_recursion - prints's a string followed
* @x: number to be used
* @y: exponent to be used
* Return: void
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
