#include<stdio.h>
/**
 * main - takes unspecificed number of arguments and returns value on
 * Description: longer things about the main function
 * Return: 0
 */

int main(void)
{
	int al;

	for (al = 'a'; al <= 'z'; al++)
		if (al != 'e' && al != 'q')
			putchar(al);
	putchar('\n');
	return (0);
}
