#include "main.h"
/**
 * _strlen - finds length of a string
 * @s: pointer for string check
 * Return: Void
 */
int _strlen(char *s)
{
int count, inc;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;

return (inc);
}
