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
int k;
for (k = 0; k <= 9; k++)
{	
for (j = k + 1; j <= 9; j++)
{
for (i = j + 1; i <= 9; i++)
{
if (i != j)
{
putchar('0' + k);
putchar('0' + j);
putchar('0' + i);
if (i == 9 && j == 8 && k == 7)
break;
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
