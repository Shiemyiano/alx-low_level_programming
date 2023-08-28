/**
 * _strspn - fuction locate char in string
 * @s: string
 * @accept: char to count
 *
 * Return: counter of accept
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned i, j, counter;
counter = 0;

for (i = 0; accept[i] != '\0'; i++)
{
for (j = 0; s[j] != '\0'; j++)
{
if (accept[i] == s[j])
counter++;
}
}
return (counter);
}
