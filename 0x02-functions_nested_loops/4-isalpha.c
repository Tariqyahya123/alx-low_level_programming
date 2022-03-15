#include <stdio.h>

/**
 * main - Entry point
 *_isalpha - check if alpha
 * Return: Always 0 (Success)
 */


int _isalpha(int c)
{


if ( c <= 90  && c >= 65)
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
