#include <stdio.h>

/**
 * memset - fill memory with a constant byte
 *
 * @n: unsigned int bytes
 * @s: char *pointer
 * @b: char with the constant byte
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

		while (i < n)

		{
			s[i] = b;
			i++;
		}
	return (s);
}
