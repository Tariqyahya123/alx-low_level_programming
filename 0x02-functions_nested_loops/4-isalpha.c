#include <stdio.h>

/**
 * _isalpha - check for lower case letter
 * @c : character to check
 * Return:0 or 1
 */

int _isalpha(int c)
{
if (c <= 90  && c >= 65)
{
return (1);
}
else
if (c <= 122 && c >= 97)
{
return (1);
}
return (0);
}
