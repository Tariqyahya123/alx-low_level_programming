#include "main.h"
/**
 * print_diagonal - prints numbers
 * @n : number of lines
 * Return: void
 */


void print_diagonal(int n)
{

int i;
int j;
if (n > 0)
{
for (i = 0; i < n; i++)
{
if (i > 0)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
}


_putchar('\\');
_putchar('\n');


}
}
else
{
_putchar('\n');
}
}
