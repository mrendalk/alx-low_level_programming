#include "main.h"
/**
* is_prime_number - prints's a string followed
* @n: number to be checked
* Return: void
*/
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}
#include "main.h"
/**
* is_prime - prints's a string followed
* @start: number to stary checking from
* @n: number to be checked
* Return: i if n is prime, o otherwise
*/
int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
