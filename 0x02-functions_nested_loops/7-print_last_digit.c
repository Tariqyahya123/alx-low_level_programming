#include <stdio.h>
#include "main.h"
#include <limits.h>
/**
 * print_last_digit - check for lower case letter
 * Return: 0 or 1 or -1
 *@n : character to check
 */

int print_last_digit(int n)
{
if (n == INT_MIN)
{
_putchar('8');
return (8);
}
if (n < 0)
{
n = n * (-1);
n = n % 10;
_putchar('0' + n);
return (n);
}
n = n % 10;
_putchar('0' + n);
return (n);
}
