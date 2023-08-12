#include <stdio.h>
/**
 * main - Entry point
 *print all letter in small case
 * Return: Always 0 (Success)
 */
int main(void)
{
char a = 'z';
do {
putchar(a);
a--;
} while (a >= 'a');
putchar('\n');
return (0);
}
