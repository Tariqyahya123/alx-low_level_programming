#include <stdio.h>
/**
 * main - Short description, single line
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */

int main(void)
{
	int a;

	for(a = '0'; a <= '9'; a++)
	{
	putchar(a);
	if (a < '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
return (0);
}
