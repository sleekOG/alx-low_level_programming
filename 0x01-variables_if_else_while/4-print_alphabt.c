#include <stdio>
/**
 * main -this is the entry of the main function
 *
 * Description: to print lowercase alphatet letters exclding e and q
 * Return : 0
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; ++c)
{
if (c != 'e' && c != 'q')
putchar(c);
}

putchar('\n');

return (0);
}
