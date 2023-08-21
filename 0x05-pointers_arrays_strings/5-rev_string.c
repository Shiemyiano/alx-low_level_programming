#include <stdio.h>

/**
 * rev_string - print string in reverse
 * @s: string te reverse
 *
 * Return: no return
 */

void rev_string(char *s)
{
int i;
int count = 0;
for (i = 0; s[i] != '\0'; i++)
{
count++;
}
count--;
for (; count >= 0; count--)
{
printf("%c", s[count]);
}
printf("\n");
}
