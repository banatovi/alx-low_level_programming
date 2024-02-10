#include <unisted.h>

/**
* _putchar - this function takes a car as argument
* @c: character to be printed.
* Return: on success 1.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
