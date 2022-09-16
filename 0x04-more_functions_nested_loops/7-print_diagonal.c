#include "main.h"

/**
 * print_diagonal - function outputs \
 *
 * @n: is int
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y <= n; y++)
			{
				if (x == y)
				{
					_putchar(92);
					break;
				}
				_putchar(' ');
			}
			_putchar(' ');
		}
	}
	else
	{
		_putchar('\n');
	}
}

