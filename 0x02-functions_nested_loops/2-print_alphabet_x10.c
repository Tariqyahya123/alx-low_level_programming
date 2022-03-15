#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


void print_alphabet_x10(void);

int main(void)
{
	


	print_alphabet_x10();
    return (0);
}

void print_alphabet_x10(void)
{
 char letter;
 int i;

for ( i = 0 ; i< 10; i++)
{	
 for (letter = 'a'; letter <= 'z'; letter++)
 {
	printf("%c", letter);
 }
 	printf("\n");
}}
