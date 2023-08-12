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
int m;
for (m = 0; m <= 9; m++)
{
for (k = 0; k <= 9; k++)
{
if (m == 9 && k == 9)
break;
for (j = 0; j <= 9; j++)
{
for (i = 0; i <= 9; i++)
{

putchar('0' + m);
putchar('0' + k);
putchar(' ');
putchar('0' + j);
putchar('0' + i);
if (m == 9 && k == 8 && i == 9 && j == 9)
break;
putchar(',');
putchar(' ');
}
}
}
if (m == 9 && k == 8)
break;
}

putchar('\n');
return (0);
}
