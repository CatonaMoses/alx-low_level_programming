#include "main.h"

/**
 * flip_bits - count number of bits to change
 * to get from one number to another that still in code
 * @n: first number of the code in
 * @m: second number of my code
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
