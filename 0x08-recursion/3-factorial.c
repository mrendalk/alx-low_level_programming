#include "main.h"
/**
* factorial - prints's a string followed
* @n: number to be a printed
* Return: interger
*/
int factorial(int n)
{
	int next_factorial;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	next_factorial = factorial(n - 1);
	return (n * next_factorial);
}
