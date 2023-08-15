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
int result;
for (m1 = 0; m1 < 10; m1++)
{
for (m2 = 0; m2 < 10; m2++)
{
result = m1 * m2;
_putchar(result + '0');
if (m2 == 9)
{
_putchar('$');
break;
}
_putchar(',');
_putchar(' ');
}

_putchar('\n');
}
}

