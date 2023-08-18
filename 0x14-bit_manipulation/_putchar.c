#include "main.h"
#include <unistd.h>
/**
 * _putchar - writ  character c to stdout
 * @c: The character to print
 *
 * dvdv ddf
 * Return: On success 1.
 * On error, -1 is returned, and errno set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
