#include "main.h"
#include <stdio.h>

/**
 * strcat - swap variable values
 * @a: pointer 1
 * @b: pointer 2
 * Return: final string
*/

char *_strcat(char *a, char *b)
{
int i;
int j = 0;
/* char final[(sizeof(a) + sizeof(b)) - 1]; */

for (i = 0; i < 500; i++)
{
if (a[i] == '\0')

break;
}


do {

a[i] = b[j];
i++;
j++;
	} while (b[j] != '\0');


return (a);
}
