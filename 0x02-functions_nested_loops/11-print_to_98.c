#include <stdio.h>

/**
 * print_to_98 - function to print between given number to 98 
 * @n: start number to count from 
 * Return: no return 
 */
void print_to_98(int n)
{
if (n > 98)
{
for (; n >= 98 ; n--)
{
printf("%d ,", n);
}
}
else
{
for (; n <= 98 ; n++)
{
printf("%d ,", n);
}
}
}
