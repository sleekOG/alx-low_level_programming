#include "main.h"

/**
 * _islower -  program checks if character is lower case
 *@c: this is the character to be checked
 * Description - return 1 if characher is lower case and zero if otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
