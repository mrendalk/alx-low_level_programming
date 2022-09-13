#include "main.h"
/**
 * _isalpha - cheack for alphabetic character
 *
 * @c: argument
 *
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if ((c <= 'z' && c <= 'Z') || (c >= 'a' && c >= 'A'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
