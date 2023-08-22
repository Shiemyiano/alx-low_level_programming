#include <stdio.h>

/**
 * rev_string - print string in reverse
 * @s: string te reverse
 *
 * Return: no return
 */

void rev_string(char *s)
{
int i, c = 0;
int k;
char x;

while (s[c] != '\0')
{
c++;
}
c--;
if (c % 2 == 0)
{
k = c / 2;
}
else
{
k = (c + 1) / 2;
}
for (i = 0; i < k; i++)
{
x = s[i];
s[i] = s[c];
s[c] = x;
c--;
}

}
