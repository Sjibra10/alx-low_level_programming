#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there are digit
 * @str: array string
 * Return: 0 always (Success)
 */

int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /**counts the string*/

	{
		if (!isdigit(str[count])) /**check if str there are digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: 0 always (Success)
 */

int main(int argc, char *argv[])

{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /**Goes through the whole argv*/
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]); /**ATOI --> convert every char to int*/
			sum += str_to_int;
		}

		else /**checks if each number contains symbols that are not digits*/
		{
			printf("Error\n");
			return (1);
		}
	count++;
	}

printf("%d\n", sum);

return (0);
}
