#include "main.h"
/**
 * _abs - absoulute value of an integer
 * @c: argument
 * Return: result of the value
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
