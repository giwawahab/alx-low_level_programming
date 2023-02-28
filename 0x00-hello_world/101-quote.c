#include <stdio.h>
#include <unistd.h>

/**
 * main - this function out to the standard error
 *
 * Return: this return 1 of succes
 */

int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
