#include <stdio.h>
/**
 * main - entry point to the program
 *
 * Description: Will print lower and upper case alphabets on the same line
 * Return: 0
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
