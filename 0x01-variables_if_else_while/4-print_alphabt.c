#include <stdio.h>
/**
 * main - Entry point
 *print all letter in small case
 * Return: Always 0 (Success)
 */
int main(void)
{
char a = 'a';
for (; a <= 'z' ; a++)
{
if (a == 'e' || a == 'q')
{
continue;
}
putchar(a);
}
printf("\n");
return (0);
}
