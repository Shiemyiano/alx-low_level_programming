/**
 * _strlen - function to return length of string
 * @s: string var
 *
 * Return: string length
 */

int _strlen(char *s)
{
int i;
int count = 0;
for (i = 0; s[i] != '\0'; i++)
{
count++;
}
return (count);
}
