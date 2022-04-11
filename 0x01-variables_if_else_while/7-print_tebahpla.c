#include <stdio.h>

/**
 * main - entry point to the main program
 *
 * Description: print lower case alphabets in descendingorde or backwards
 * Return: 0
 */
int main(void)
{
char c;

for (c = 'z'; c >= 'a'; --c)
putchar(c);

putchar('\n');

return (0);
}
