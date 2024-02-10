#include "main.h"

/**
 * flip_bits - get the number of bits to flip to get from n to m
 * @n: initial number
 * @m: final number
 * Return: the number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = m ^ n;
	int count = 0;

	while (flipped)
	{
		if (flipped & 1)
			count++;
		flipped >>= 1;
	}
	return (count);
}
