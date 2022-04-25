#include "main.h"
/**
 * _puts - prints string
 * @str: string to be printed
 * Description: prints a string
 * on success: return the number of characters printed
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
}
