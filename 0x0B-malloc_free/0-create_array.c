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
unsigned int i = 0;
char *arr;
if (size == 0)
return (NULL);

arr = malloc(size * sizeof(char));
if (arr == NULL)
return (NULL);

for (; i < size; i++)
arr[i] = c;
return (arr);

}
