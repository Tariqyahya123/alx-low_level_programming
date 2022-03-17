#include "main.h"
#include <stdio.h>
/**
 * print_square - prints numbers
 * @size : number of lines
 * Return: void
 */


void main(void)
{

fizz_buzz();


}


void fizz_buzz(void)
{
int i;

for (i =1 ; i <= 100; i++)
{
if ((i % 5 == 0)  && (i % 3 == 0) && i > 0)
{
printf("FizzBuzz");
printf(" ");
}
else if (i % 5 == 0 && i > 0)
{
printf("Buzz");
printf(" ");

}
else if (i % 3 == 0 && i > 0)
{
printf("FIzz");
printf(" ");
}
else
{
printf("%d", i);
printf(" ");
}

}

}

