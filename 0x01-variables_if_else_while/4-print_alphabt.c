#include <stdio.h>
/**
 * main - print alphabet without e and q
 *
 * Return: always 0
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
if (c != 'q' && c != 'e')
putchar(c);
}
putchar('\n');

return (0);
}
