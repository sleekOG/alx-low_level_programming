#include "main.h"
/**
 * _strncat - concatenate two strings but add inputted number of bytes
 * @dest: String to be appended pon
 * @src: sring to be completed a the end of dest
 * @n: integer parameters to compare index to
 * Return: returns new concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;

while (dest[index++])
	dest_len++;
for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
return (dest);
}
