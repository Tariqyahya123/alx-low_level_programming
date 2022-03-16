#include <stdio.h>
#include "main.h"
#include <time.h>
/**
 * print_sign - check for lower case letter
 * Return: 0 or 1 or -1
 *@n : character to check
 */




void jack_bauer(void)
{
int i;
int j;
int c;
int d;


for (i = 0; i < 3 ; i++)
{
	
for (j = 0; j < 10; j++)
{
for (c = 0; c < 6; c++)
{
for (d = 0; d < 10; d++)
{

if (i == 2 && j == 3 && c == 5 && d == 9){
	printf("23:59\n");
	return ;
}
printf("%d%d:%d%d\n", i,j,c,d);
}
}
}
}
}
