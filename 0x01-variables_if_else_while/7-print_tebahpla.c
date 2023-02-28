#include <stdio.h>

/**
 * main - This main function will be executed first
 *
 * Return: 0 if successful
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
