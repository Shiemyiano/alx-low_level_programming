#include <stdio.h>
/**
 * main - Entry point
 *print all single digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
for (j = 0; j <= 9; j++)
{
for (i = j+1; i <= 9; i++)
{
if (i != j)
{
putchar(j + i);
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
