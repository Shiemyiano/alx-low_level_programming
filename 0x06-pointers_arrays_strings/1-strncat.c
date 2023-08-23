/**
 * _strncat - fuction to concatenate two strings
 * @dest: first string
 * @src: second string
 * @n: length to cut
 * Return: poiter to concatenate string
 */

char *_strncat(char *dest, char *src, int n)
{
int i;
int c;

for (i = 0; dest[i] != '\0'; i++);

for (c = 0; src[c] != '\0'; c++)
{
if (c == n )
{
break;
}
dest[i] = src[c];
i++;
}

dest[i] = '\0';

return (dest);
}
