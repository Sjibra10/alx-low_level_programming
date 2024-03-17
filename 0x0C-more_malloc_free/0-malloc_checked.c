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