#include <stdio.h>
/*
 *
 *
 *
 * comment
 *
 *
 */


int main(void)
{
char c;
	for (c = 'a'; c <= 'z'; ++c)
	if (c == 'e')
	{
		c = 'f';
	}
	else if (c == 'q')
	{
		c = 'r';
	}
	printf("%c", c);
printf("\n");
return (0);
}
