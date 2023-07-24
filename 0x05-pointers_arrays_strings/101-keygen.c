#include <stdlib.h>
#include <time.h>
#include <unistd.h>

/**
* main - generates random valid passwords for the program 101-crackme
*
* Return: 0
*/
int main(void)
{
int sum = 2772, r;

srand(time(NULL));
while (sum > 122)
{
r = (rand() % 125) + 1;
write(1, &r, 1);
sum -= r;
}
write(1, &sum, 1);
return (0);
}
