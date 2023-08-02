#include "main.h"
/**
 * factorial - to get the factorial of a number
 * @n: the factor to factorialize
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
