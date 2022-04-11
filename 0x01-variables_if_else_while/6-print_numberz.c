#include <stdio.h>
/**
 * main -  entry point to the function
 *
 * Description: will print numbers 0 upto 9 in same line
 * return: 0
 */
int main(void)
{
int i;
for (i = 0; i <= 9; ++i)
putchar('0' + i);

putchar('\n');

return (0);
}
