#include <stdio.h>

/**
 * main - Prints the sizeof many var types
 * Description: longer things about the main functionlonger things about the main function
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	double d;
	float e;

	printf("Size of a char: %lu", (unsigned long)sizeof(c));
	printf(" byte(s)\n");
	printf("Size of an int: %lu", (unsigned long)sizeof(i));
	printf(" byte(s)\n");
	printf("Size of a long int: %lu", (unsigned long)sizeof(i));
	printf(" byte(s)\n");
	printf("Size of a long long int: %lu", (unsigned long)sizeof(d));
	printf(" byte(s)\n");
	printf("Size of a float: %lu", (unsigned long)sizeof(f));
	printf(" byte(s)\n");
	
	return (0);
}
