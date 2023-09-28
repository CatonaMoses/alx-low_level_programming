#include "main.h"

/**
 * get_bit - return value of a bit at an index in a decimal number
 * @n: number to be searched
 *
 * @index: index of bit of mine
 * Return: value of bit of code
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
