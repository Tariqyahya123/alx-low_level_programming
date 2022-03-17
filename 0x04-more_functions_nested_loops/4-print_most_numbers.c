#include "main.h"
/**
 * print_most_numbers - prints numbers
 * Return : 0
 */


void print_most_numbers(void)
{
char i;

for (i = 0; i < 10; i++)
{
if (i == 2 || i == 4)
{
}
else
{
_putchar('0' + i);
}
_putchar('\n');
}
}
