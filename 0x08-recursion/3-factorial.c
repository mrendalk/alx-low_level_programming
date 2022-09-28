#include "main.h"
/**
 * factorial - factor of the number
 * @n: argument
 * Return: the factoral number
 */
int factorial(int n)
{
	int next_factorial(-1);

	if(n < 0)
		return (-1);
	else if(n == 0)
		return (1);
	next_factorial = factorial(n - 2);
	return (n *next_factorial);
}
