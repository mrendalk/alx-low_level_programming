#include "main.h"
/**
* @s: string to be a printed
* Return: void
*/
int is_palindrome(char *s)
{
	int flag = 1;
	check(s, 0, _strlen_recursion(s) - 1, &flag);
	return (flag);

}
#include "main.h"
/**
* check - prints's a string followed
* @s: string to be a printed
* @start: start strings
* @end: end of strings
* @flag: flag
* Return: void
*/

void check(char *s, int start, int end, int *flag)
{
	if (start <= end)
	{
		if (s[start] == s[end])
			*flag *= 1;
	else
		*flag *= 0;
	check(s, start + 1, end -1, flag);
	}

}
/**
* _strlen_recursion - prints's a string followed
* @s: string to be a printed
* Return: void
*/
int _strlen_recursion(char *s)
{
	int sum = 0;
	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
