#include "main.h"
/**
 * _isupper(int) - function that check if arguments is char
 * @c: argument to check
 * Return: 1 is uppercase
 * otherwise return 0
 *
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
