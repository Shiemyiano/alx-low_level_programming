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
int i, count, flag, j;
i = 0;
count = 0;
flag = 0;
j = 0;

while (needle[i] != '\0')
{
count++;
i++;
}
for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == needle[j])
{
flag++;
j++;
if (flag == count)
{
count = i - flag;
return (haystack + count +1);
}
}
else
{
j = 0;
flag = 0;
}
}
return ((void *)0);
}
