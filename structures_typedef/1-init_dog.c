#include "dog.h"
#include <stdlib.h>

/**
*init_dog - cinitialize a dog data structure.
*@d: dog pointer.
*@name: dog's name.
*@age: dog's age.
*@owner: dog's owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == 0)
return (NULL);
d = malloc(sizeof(struc dog));
d->name = name;
d->age = age;
d->owner = owner;
}
