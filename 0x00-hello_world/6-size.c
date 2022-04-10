#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 *     */
int main(void)
{
	printf("size of char: =%i byte\n", sizeof(char));
	printf("Size of an int: =%i byte\n",sizeof(int));
	printf("Size of a long int: =%i byte\n", sizeof(long int));
	printf("Size of a long long int: =%i bytes\n", sizeof(long long int));
	printf("Size of a float: =%i bytes\n", sizeof(float));
	return (0);
}
