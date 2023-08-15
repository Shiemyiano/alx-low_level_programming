#include "main"
/**
 * print_sign - check if number is positive or negative or zero
 * @n: number to check
 * Return: if positive 1.
 * if zero 0 is returned.
 * if negative -1 is returned
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
