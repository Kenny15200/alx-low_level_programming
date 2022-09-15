#include "main.h"
/**
 * print_last_digit - function computes last digit of number
 *
 * @n:  integer number for n
 *
 * Return: 0
 */
int print_last_digit(int r)
{

	if (r < 0)
		n = -1 * (r % 10);
	else
		n = 1 *(r % 10):
			
	_putchar ((n % 10) + '0');
	return (n % 10);
}
