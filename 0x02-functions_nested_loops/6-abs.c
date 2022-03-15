#include <stdio.h>
#include "main.h"
/**
 * _abs - check for lower case letter
 * Return: 0 or 1 or -1
 *@n : character to check
 */

int _abs(int n)
{
if (n > 0)
{
_putchar(n);
}
else
{
n = n * (-1);
_putchar(n);
}
}
