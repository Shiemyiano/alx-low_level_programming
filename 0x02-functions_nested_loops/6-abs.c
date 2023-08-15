#include "main.h"
/**
 * _abs - get positive number whatever what is input
 * @n: number to get abs
 * Return: if positive n.
 * if zero 0 is returned.
 * if negative n is returned
 */

int _abs(int n)
{
if (n > 0)
{
return (n);
}
else if (n < 0)
{
return (-1*n);
}
else
{
return (0);
}
}
