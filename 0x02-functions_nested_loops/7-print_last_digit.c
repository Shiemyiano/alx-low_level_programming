#include "main.h"

/**
 * print_last_digit: print last digit for given number
 * @n: char to check
 * Return: return the last value of given number .
 * Otherwise, 0 is returned.
 */

int print_last_digit(int n)
{
int x;
n = _abs(n);
x = n % 10;
_putchar('0' + x);
return (x);
}
