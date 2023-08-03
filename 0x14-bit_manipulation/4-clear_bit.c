#include "main.h"

/**
 * clear_bit - set  value of given bit to 0 of the code
 * @n: pointer to  number to changes of the code
 * @index: index of the bit to clear
 * Return: 1 for success, -1 for failures of code
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
