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
_putchar((i % 10));
_putchar((i / 10) + '0');
}
_putchar('\n');
j++;
}

}

