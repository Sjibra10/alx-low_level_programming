#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	b = n % 10;
	/* b will be the place holder of the remainder of %10 */
	if (b > 5)
		printf("Last digit of %d is %d and is greater than 5", n, b);
	else if (b == 0)
		printf("Last digit of %d is %d and is 0", n, b);
	else if (b < 6 && b != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, b);
	printf("\n");
	return (0);
}
