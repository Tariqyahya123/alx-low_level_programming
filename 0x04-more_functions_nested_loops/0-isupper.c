#include <stdio.h>

/**
 * _isupper - Entry point
 *
 * @c :  character to check the case
 * Return: 0 or 1
 */


int _isupper(int c)
{
if (c >= 65 && c < 97)
{
return (1);
}
return (0);

}
