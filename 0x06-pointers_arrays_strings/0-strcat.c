/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * Return: pointer to resulting `dest`
 */

char *_strcat(char *dest, char *src)
{
int i, c;

for (i = 0; dest[i] != '\0'; i++);

for (c = 0; src[c] != '\0'; c++, i++)
{
dest[i] = src[c];
}
dest[++i] = '\0';
return (dest);
}
