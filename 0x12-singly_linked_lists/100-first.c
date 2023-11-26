#include <stdio.h>

void custom_constructor(void) __attribute__ ((constructor));

/**
 * custom_constructor - a custom constructor function
 * called before the main function is executed.
 */
void custom_constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
