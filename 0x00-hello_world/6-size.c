#include <stdio.h>
/**
<<<<<<< HEAD
 * main - Prints the sizeof many var types
 * Description: longer things about the main functionlonger things about the mai
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int long b;
	int long long c;
	char d;
	float f;

	puts("Size of a char: %d\n", (unsigned long)sizeof(d));
	puts("Size of an int: %d\n", (unsigned long)sizeof(a));
	puts("Size of a long int: %d\n", (unsigned long)sizeof(b));
	puts("Size of a long long int: %d\n", (unsigned long)sizeof(c));
	puts("Size of a float: %d\n", (unsigned long)sizeof(f);
=======
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
>>>>>>> 30a8db2d28644a0a94fbf9600a550b0aec43b67a
	return (0);
}