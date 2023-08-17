#include "main.h"

/**
 * _isdigit - function that check if arguments digit
 * @c: argument to check
 * Return: 1 is digit
 * otherwise return 0
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
