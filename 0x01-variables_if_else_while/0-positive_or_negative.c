#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *main - Entry point
 *
 *Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/* d% is the specifier to call out the variable n */
	if (n > 0) /*if n is great than 0*/
		printf("%d is positive", n);
	else if (n == 0) /* else if n is equal to 0*/
		printf("%d is zero", n);
	else if (n < 0) /*else if n is less than 0*/
		printf("%d is negative", n);
	printf("\n");
return (0);
}
