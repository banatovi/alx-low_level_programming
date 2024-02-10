#include "main.h"

/**
 * set_bit - set a bit at a position to 1
 * @n: number to be used
 * @index: index to be set
 * Return: 1 on success, -1 on fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= (1 << index);
	return (1);
}
