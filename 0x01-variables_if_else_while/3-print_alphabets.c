#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Will print lower and upper case alphabets on the same line
 * return : 0
 */
int main(void)
{
int c;

for (c = 0; c < 26; ++c)
putchar('a' + c);
for (c = 0; c < 26; ++c)
putchar('A' + c);
putchar('\n');

return (0);
}
