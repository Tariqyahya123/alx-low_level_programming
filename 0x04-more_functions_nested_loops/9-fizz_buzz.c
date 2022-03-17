#include <stdio.h>
/**
 * main - main function
 * Return: void
 */


int main(void)
{

int i;

for (i = 1 ; i <= 100; i++)
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
putchar('\n');
return (0);

}





