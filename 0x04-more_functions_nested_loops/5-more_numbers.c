#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints numbers
 * Return : 0
 */


void more_numbers(void)
{
char i;
int j = 1;

while (j <= 10)
{
for (i = 0; i < 15; i++)
{
if (i > 9)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
else
{
_putchar('0' + i);
}
}
_putchar('\n');
j++;
}

}

