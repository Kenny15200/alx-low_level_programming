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

	printf("Size of a char: %lu", (unsigned long)sizeof(d));
	printf("Size of an int: %lu", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu", (unsigned long)sizeof(c));
	printf("Size of a float: %lu", (unsigned long)sizeof(f));
	return (0);
}
