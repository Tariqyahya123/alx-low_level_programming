#include "main.h"
/**
 * print_triangle - prints numbers
 * @size : number of lines
 */


void print_triangle(int size)
{
int i;
int j;
int k = 0;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < (size - (i)); j++)
{
_putchar(' ');
}
while (k < (i + 1))
{
_putchar('#');
k++;
}
k = 0;
_putchar('\n');

}

}
else
{

_putchar('\n');
}
}
