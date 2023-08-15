#include "main.h"

/**
 * print_alphabet - wirte all alphabet 10 times
 * void: no argument required
 *
 * no return
 *
 **/

void print_alphabet(void)
{
int j;
char i;
for (j = 0; j<= 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
