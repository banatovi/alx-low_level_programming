#include "main.h"

/**
 * clear_bit - change the bit at a given index to 0
 * @n: pointer to the number to modify
 * @index: index of bit to change
 * Return: 1 on success or -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
