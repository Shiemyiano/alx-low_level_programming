/**
 * _isalpha - check if char is letter or not
 * @c: char to check
 * Return: if letter 1.
 * Otherwise, 0 is returned.
 */

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
