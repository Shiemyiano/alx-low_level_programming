#include <stdio.h>
void positive_or_negative(int x)
{
if (x < 0)
{
printf("%d is negative", x);
}
else if (x > 0)
{
printf("%d is positive", x);
}
else
{
printf("%d is zero", x);
}
}
