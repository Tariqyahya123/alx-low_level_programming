#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int _islower (int c);

int main(void)
{
	
int r;

    r = _islower('H');
    putchar(r + '0');
    r = _islower('o');
    putchar(r + '0');
    r = _islower(108);
    putchar(r + '0');
    putchar('\n');

    return (0);
}

int _islower(int c)
{
 

if ( ("%d" , c) < 97 )
{
return (0);
}
return (1);

}

