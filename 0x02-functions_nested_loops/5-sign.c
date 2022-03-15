#include <stdio.h>

/**
 * print_sign - check for lower case letter
 * n : character to check
 * Return:0 or 1
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return(1);
}
else
if (n == 0)
{
printf("0");return (0);
}
printf("-");return (-1);
}
