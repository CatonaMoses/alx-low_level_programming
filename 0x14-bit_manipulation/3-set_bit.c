#include "main.h"

/**
 * set_bit - set a bit at given index to 1 of the code
 * @n: pointer to the number that is to change
 * @index: index of the bit to set to 1 and some interger
 * Return: 1 for success, -1 for failures of the code
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
