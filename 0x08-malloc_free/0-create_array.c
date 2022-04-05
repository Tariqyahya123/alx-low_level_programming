#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - swap variable values
 * @size: pointer 1
 * @c: pointer 2
 * Return: final string
*/

char *create_array(unsigned int size, char c)
{

if (size == 0)
{
return NULL;
}
char *array = malloc(size * sizeof(char));

int i;

for (i = 0; i < (int) size; i++)
{
array[i] = c;
}
return (array);
}
