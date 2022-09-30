#include <stdio.h>
#include "main.h"
/**
 * main - print command line argument
 * @argc: number of command line argument
 * @argv: array of command line argument
 * Retrun: exit with 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return 0;
}
