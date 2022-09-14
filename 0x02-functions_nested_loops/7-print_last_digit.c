#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @c: argumen
 * Return: the result
 */

int print_last_digit(int c)
{
	int last_digit;

	last_digit = (c % 10);
	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar('%d', last_digit);
	return (last_digit);
}
