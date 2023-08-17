#include "main.h"
/**
 * print_diagonal - function that checks for uppercase character.
 * @n: is the integer for the paramaters of my function
 * Return: 0
 */
void print_diagonal(int n)
{
int i;
int j;
for (i = 1; i <= n; i++)
{
_putchar('\\');
_putchar('\n');
for (j = 1; j <= i; j++)
{
_putchar(' ');
}
}

_putchar('\n');
}
