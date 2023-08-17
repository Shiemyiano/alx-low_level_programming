#include "main.h"
/**
 * print_square - function that draw of hash.
 * @size: the length and width of square
 * Return: 0
 */
void print_square(int size)
{
int i;
int j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar(35);
}
_putchar('\n');
}
if (size <= 0)
_putchar('\n');
}
