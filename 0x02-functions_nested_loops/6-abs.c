#include <stdio.h>
#include "main.h"
/**
 * _abs - check for lower case letter
 * Return: 0 or 1 or -1
 *@n : character to check
 */

int _abs(int n)
{
if (n >= 0)
{
return (n);
}
n = n * (-1);
return (n);
}
