/**
 * _memcpy - function that copy memory as required
 * @dest: name of array
 * @src: filler
 * @n: number of location to fill
 *
 * Return: address of first elment of array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
