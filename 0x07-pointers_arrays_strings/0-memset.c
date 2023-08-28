/**
 * _memset - function that fills memory as required
 * @s: name of array
 * @b: filler 
 * @n: number of location to fill
 *
 * Return: address of first elment of array
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
