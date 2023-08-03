#include "main.h"

/**
 * get_bit - returns values of bit at index in decimal numbers
 * @n: number to search that is needed
 * @index: index of the bit of the code
 * Return: value of the bit in the code of mine
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
