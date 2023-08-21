#include <stdio.h>

/**
 * rev_string - print string in reverse
 * @s: string te reverse
 *
 * Return: no return
 */

void rev_string(char *s)
{
int i, c, k;
char *a, aux;

*a = *s;

while (s[c] != '\0')
{
c++;
}
c--;



for (i = 0; i <= c; i++)
{
s[i] = a[c];
c--;
}
}
