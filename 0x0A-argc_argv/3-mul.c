#include <stdio.h>
#include "main.h"
/**
 * main - print all arguments it receives
 * @argc: arguments number
 * @argv: array of the string
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int product;

	if(argc == 3)
	{
		printf("%d\n",argv[1] * argv[2]);
	}
	else
	{
		print("Error");
	}
	return (0);
}
