#include <stdio.h>

/**
 * print_rev - print string in reverse
 * @s: string te reverse
 *
 * Return: no return
 */

void print_rev(char *s)
{
int i;
int count = 0;
for (i = 0; s[i] != '\0'; i++)
{
count++;
}
for (; count >= 0; count--)
{
printf("%c", s[count]);
}
}
