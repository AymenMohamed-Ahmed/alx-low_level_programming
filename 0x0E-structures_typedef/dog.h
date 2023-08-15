#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
 * struct dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
/**
 * main - Short description, single line
 *
 * Description: Longer description of the function
 *
 * Return: Description of the returned value
 */

int main(void)
{
dog_t my_dog;

my_dog.name = "Poppy";
my_dog.age = 3.5;
my_dog.owner = "Bob";
printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
return (0);
}
#endif
