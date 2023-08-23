/**
 * _strcat - fuction to concatenate two strings
 * @dest: first string
 * @src: second string
 *
 * Return: poiter to concatenate string
 */

char *_strcat(char *dest, char *src)
{
int i;
int c;
for (i = 0; dest[i] != '\0'; i++);

for (c = 0; src[i] != '\0'; c++)
{
dest[i] = src[c];
i++;
}
dest[i] = '\0';
return (dest);
}
