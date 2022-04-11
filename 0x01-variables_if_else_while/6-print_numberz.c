#include <stdio.h>
/**
 *  main -  entry point to the program
 *
 * Description: will print numbers 0 upto 9 in same line
 * Return: 0
 */
int main(void)
{
int i;
for (i = 0; i <= 9; ++i)
putchar('0' + i);

putchar('\n');

return (0);
}
