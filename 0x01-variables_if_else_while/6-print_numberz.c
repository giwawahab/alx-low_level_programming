#include <stdio.h>

/**
 * main - this is first function to be executed
 *
 * Return: Always return 0
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
