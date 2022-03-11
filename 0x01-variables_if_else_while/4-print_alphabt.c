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
char c;
	for (c = 'a'; c <= 'z'; ++c)
	{
	if (c == 'e')
	{
		c = 'f';
	}
	else if (c == 'q')
	{
		c = 'r';
	}
	printf("%c", c);
	}
printf("\n");
return (0);
}
