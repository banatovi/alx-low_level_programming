#include "main.h"

/**
 * get_bit - get the value of a bit at a given index
 * @n: the number
 * @index: index staring from 0 of the bit required
 * Return: the converted value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;
		return (bit_val);
}
