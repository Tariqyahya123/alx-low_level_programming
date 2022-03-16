#include <stdio.h>
#include "main.h"
/**
 * print_sign - check for lower case letter
 * Return: 0 or 1 or -1
 *@n : character to check
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
if (((j+1)*i) >= 9){
printf("%d", temp);
putchar(',');
putchar(' ');	

}
else if (temp < 9){
printf("%d", temp);
putchar(',');
putchar(' ');
putchar(' ');
}
}
printf("\n");
	
}
}
