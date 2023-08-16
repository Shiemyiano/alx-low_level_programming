#include "main.h"

/**
 * times_table - wirte all time table
 * void: no argument required
 *
 * no return
 *
 **/

void times_table(void)
{
int m1, m2;
int result, r;
for (m1 = 0; m1 < 10; m1++)
{
_putchar('0');
_putchar(',');
for (m2 = 1; m2 < 10; m2++)
{
result = m1 * m2;
if (result > 9)
{
r = result / 10;
result = result % 10;
_putchar(' ');
_putchar(r + '0');
_putchar(result + '0');
_putchar(',');
}
_putchar('  ');
_putchar(result + '0');
_putchar(',');
}
_putchar('\n');
}
}

