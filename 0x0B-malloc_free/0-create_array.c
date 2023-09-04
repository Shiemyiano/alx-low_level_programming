#include <stdlib.h>
/**
 * create_array - function name, crearte dynamic array
 * @size:  index of array
 * @c: init element
 *
 * Return: Null if size = 0 either address of first element
 *
 */
char *create_array(unsigned int size, char c)
{
int i = 0;
char *arr;
if (size == 0)
return ((void *) 0);
else
{
arr = malloc(size * sizeof(char));
for (; i < size; i++)
arr[0] = c;
return (arr);
}
}
