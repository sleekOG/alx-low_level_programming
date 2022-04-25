#include "main.h"
/**
 * swap_int - swaping the variable values
 * @a: pointer 1
 * @b: pointer 2
 * return: void
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
