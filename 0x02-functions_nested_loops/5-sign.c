#include <stdio.h>
#include "main.h"
/**
 * print_sign - check for lower case letter
 * Return: 0 or 1 or -1
 *@n : character to check
 */

int print_sign(int n)
{
int test;
if (n > 0)
{
test = 1;
_putchar('+');
}
else
if (n == 0)
{
test = 0;
_putchar('0');
}
else
{
test = -1;
_putchar('-');
}
return (test);
}
