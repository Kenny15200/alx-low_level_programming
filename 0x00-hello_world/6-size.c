#include <stdio.h>

/**
 * main - Prints the sizeof many var types
 * Description: longer things about the main functionlonger things about the main function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int long b;
	int long long c;
	char d;
	float f;

	puts("Size of a char: %d", (unsigned long)sizeof(d));
	puts("Size of an int: %d", (unsigned long)sizeof(a));
	puts("Size of a long int: %d", (unsigned long)sizeof(b));
	puts("Size of a long long int: %d", (unsigned long)sizeof(c));
	puts("Size of a float: %d", (unsigned long)sizeof(f);
	return (0);
}
