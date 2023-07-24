#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - generates random valid passwords for the program 101-crackme
*
* Return: 0
*/
int main(void)
{
int sum = 2772, i, r;

srand(time(NULL));
while (sum > 122)
{
r = (rand() % 125) + 1;
printf("%c", r);
sum -= r;
}
printf("%c", sum);
return (0);
}
