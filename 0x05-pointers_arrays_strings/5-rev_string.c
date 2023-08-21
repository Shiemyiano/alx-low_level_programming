#include <stdio.h>

/**
 * rev_string - print string in reverse
 * @s: string te reverse
 *
 * Return: no return
 */

void rev_string(char *s)
{
int i, k = 0;
int count = 0;
for (i = 0; s[i] != '\0'; i++)
{
count++;
}
char tmp[count];
count--;
for (; count >= 0; count--)
{
tmp[k] = s[count];
k++;
}
for (i = 0; s[i] != '\0'; i++)
{
s[i] = tmp[i];
}
printf("\n");
}
