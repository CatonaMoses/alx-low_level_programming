#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - can  print a sentence before the main is done
 * function is to executed and nothing else
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
