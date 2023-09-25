#include "main.h"
/**
*_isalpha - used to check whether char c is lowercase or uppercase
*@c: is the character to be checked
*Return: 1 if char is lowercase or uppercase, else 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
