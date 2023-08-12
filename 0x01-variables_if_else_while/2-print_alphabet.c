#include <stdio.h>
/**
 * main - Entry point
 *print all letter in small case
 * Return: Always 0 (Success)
 */
int main(void)
{
char a = 'a';
do{
putchar(a);
a++;
} while (a <= 'z');
printf("\n");
return (0);
}
