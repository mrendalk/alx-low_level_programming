#include <stdio.h>
#include "main.h"
/**
 * main - print all arguments it receives
 * @argc: arguments number
 * @argv: array of the string
 * Return: exit with 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return 0;
}
