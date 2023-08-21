#include <stdio.h>
/*
 * _puts - function to print whole string
 * @s: string to print 
 *
 * Return: void
 */
void _puts(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
printf("%c", s[i]);
}
printf("\n");
}
