#include <stdio.h>
#include <unistd.h>

/**
 * main - prints the last part of a quote.
 * Return: Always 1
 */
int main(void)
{
	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
