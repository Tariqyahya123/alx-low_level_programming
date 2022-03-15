#include <stdio.h>

/**
 * main - Entry point
 *isalpha - check if alpha
 * return int
 * c - best member integer
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
