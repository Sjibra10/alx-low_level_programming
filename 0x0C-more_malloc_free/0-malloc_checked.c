<<<<<<< HEAD
#include <stdlib.h>
/**
  * malloc_checked - allocates memory using malloc.
  * @b: size of memory to be allocated.
  *
  * Return: pointer to allocated memory.
  */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
=======
#include <stdio.h>
#include <limits.h>
#include "main.h"

/** 
 * malloc_checked - allocates memory using malloc
 * @b: size of the new memory
 * Return: pointer to the new allocated memory b
**/

void *malloc_checked(unsigned int b)
{
 char *result;

 result = malloc(b);

 if (result == NULL)
 exit(98);
 else
 return (result);

}
>>>>>>> a233e97a9842df94b2787d917c72893f41af3e45
