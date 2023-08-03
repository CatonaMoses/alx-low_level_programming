#include "main.h"

/**
 * get_endianness - check if  machine is a large or small endian
 * Return: 0 for larger thing, 1 for smaller thing
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
