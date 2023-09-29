#include "main.h"

/**
 * _strlen_recursion - gets the length of a string
 * @s: string to be used
 *
 *Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += -srlen_recursion(s + 1);
	}
	return (sum);
}
