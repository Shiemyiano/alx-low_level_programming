#include <stdlib.h>
/*
 * create_array - function name
 * @size:  index of array 
 * @c: init element
 *
 * Return: Null if size = 0 either address of first element
 *
 */

char *create_array(unsigned int size, char c)
{
char *arr;
if (size == 0)
return ((void *) 0);
else 
{
arr = malloc(size * sizeof(char));
arr[0] = c;
return (arr);
}
}
