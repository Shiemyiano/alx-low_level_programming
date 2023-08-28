/**
 * _strstr- locates a character in a string
 *
 * @haystack: the string to check
 * @needle: the character we're looking for
 *
 * Return: a pointer to the first occurance of the character @c in the string
 * @s. Return NULL if the character isn't found
 */

char *_strstr(char *haystack, char *needle)
{
int i;
int s = 0;

while (needle[s] != '\0')
s++;

while (*haystack)
{
for (i = 0; needle[i]; i++)
{
if (haystack[i] != needle[i])
break;
}
if (i != s)
haystack++;
else
return (haystack);
}
return ((void *)0);
}
