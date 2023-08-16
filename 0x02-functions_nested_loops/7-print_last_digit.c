#include "main.h"

/**
 * print_last_digit -  print last digit for given number
 * @n: char to check
 * Return: return the last value of given number .
 * Otherwise, 0 is returned.
 */

int print_last_digit(int n)
{
int x;
x = n % 10;
if (x < 0)
{
x = x * -1;
}
_putchar(x + '0');
return (x);
}
