#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog, or NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
unsigned int a, namex, ownerx;

if (name == NULL || owner == NULL)
return (NULL);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
for (namex = 0; name[namex]; namex++)
;
namex++;
dog->name = malloc(namex * (sizeof(char)));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
for (a = 0; a < namex; a++)
dog->name[a] = name[a];

dog->age = age;

for (ownerx = 0; owner[ownerx]; ownerx++)
;
ownerx++;
dog->owner = malloc(ownerx * (sizeof(char)));
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
for (a = 0; a < ownerx; x++)
dog->owner[a] = owner[a];
return (dog);
}
