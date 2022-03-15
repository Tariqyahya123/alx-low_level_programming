#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - check for lower case letter
 * Return: 0 or 1 or -1
 *@n : character to check
 */

int print_last_digit(int n)
{
n = n % 10;
_putchar('0' + n);
return (n);
}
