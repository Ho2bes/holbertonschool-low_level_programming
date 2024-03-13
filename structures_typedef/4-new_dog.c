#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
*new_dog - structure
*@name: dog name
*@age: dog  age
*@owner: dog owner
*Return: Success
*/
dog_t *new_dog(char *name, float age, char *owner)
{
struct dog *d;
d = malloc(sizeof(struct dog));
if (d == NULL)
return (NULL);
d->name = name;
d->age = age;
d->owner = owner;
return (d);
}
