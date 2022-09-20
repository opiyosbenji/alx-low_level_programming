#include "main.h"

/**
 * swap_int - swaps the values of integers
 * @a: first int
 * @b: second int
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;
	*a = c;
	*b = d;
}
