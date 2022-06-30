#include <stdio.h>

/**
 ** main - Entry point
 *   
 ** Return: Always 0 (Success)
 *
 */
int main(void)
{
	printf("size of char: =%d byte\n", sizeof(char));
	printf("Size of an int: =%d byte\n", sizeof(int));
	printf("Size of a long int: =%d byte\n", sizeof(long int));
	printf("Size of a long long int: =%d bytes\n", sizeof(long long int));
	printf("Size of a float: =%d bytes\n", sizeof(float));
	return (0);
}
