#include <stdio.h>

/**
 * print_to_98 - function to print between given number to 98
 * @n: start number to count from
 * Return: no return
 */
void print_to_98(int n)
{
for (; n > 98 ; n--)
{
printf("%d, ", n);
}

for (; n < 98 ; n++)
{
printf("%d, ", n);
}

printf("%d\n", 98);
}
