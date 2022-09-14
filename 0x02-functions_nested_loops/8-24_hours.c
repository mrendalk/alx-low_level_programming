#include "main.h"
/**
 * jack_bauer - every minutes of a day
 *
 * Return: Always 0
 */

void jack_bauer(void)
{
	int i, j;

	for(i=0; i <= 23; i++)
	{
		for(j=0; j <= 59; j++)
		{
			if (i <= 9 && i >= 0)
			{
				_putchar('0');
			}
			_putchar(i);
			_putchar(':');
			if(j <= 9 && j >= 0)
			{
				_putchar('0');
			}
			_putchar(j);
			_putchar('\n');
		}
	}
}

