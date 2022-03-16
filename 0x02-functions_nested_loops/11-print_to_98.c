#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - check for lower case letter
 *@n : character to check
 */


void print_to_98(int n) {
int a;
if (n <= 98)
{
for (a = n; a < 99; a++)
{
if (a = 98)
{
printf("%d", a);
}
else {
printf("%d, ", a);
}
}
}
else 
{
for (a = n; a > 98; a--)
{
if (a = 98)
{
printf("%d", a);
}
else {
printf("%d, ", a);

}
}
}
}
