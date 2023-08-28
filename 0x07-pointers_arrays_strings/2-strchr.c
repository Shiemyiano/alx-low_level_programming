/**
 * _strchr - fuction locate char in string
 * @s: string
 * @c: char to find
 *
 * Return: pointer to required char
 */

char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (c == s[i])
{
return (s + i);
}
}
return (NULL);
}
