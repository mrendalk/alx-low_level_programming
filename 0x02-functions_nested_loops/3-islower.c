#include "main.h"
/**
 * _islower - check lowercase
 * @c: is theint tha will use for the argument
 * Return: Always 0 and 1
 */
int _islower(int c) 
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
