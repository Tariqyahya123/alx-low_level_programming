#include <stdio.h>
#include "main.h"
/**
 * times_table - check for lower case letter
 */


void times_table(void)
{
int i;
int j;
int temp;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
temp = j * i;
if (j == 9)
{
printf("%d", temp);
}
else if (((j + 1) * i) >= 10)
{
printf("%d", temp);
putchar(',');
putchar(' ');


}
else if (temp < 9)
{
printf("%d", temp);
putchar(',');
putchar(' ');
putchar(' ');
}
}
printf("\n");

}
}
