#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return:void
 */



void print_alphabet_x10(void)
{
char letter;
int i;

for (i = 0 ; i < 10; i++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
	printf("%c", letter);
}
	printf("\n");
}}
