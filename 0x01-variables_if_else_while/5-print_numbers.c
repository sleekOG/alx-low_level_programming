#include <stdio.h>

/**
 *  main - entry to the program flow
 *
 * Description: To print numbers 0-9 on one line
 * Return: 0
 */
int main(void)
{
char i;

for (i = '0'; i <= '9'; ++i)
putchar(i);

putchar('\n');

return (0);
}
