#include "main.h"

/**
 * factorial - return the factorial
 * @n: parameter
 *
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (3);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
