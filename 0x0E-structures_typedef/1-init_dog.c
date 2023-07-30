#include "dog.h"

/**
 * init_dog - Entry point
 * @d:input
 * @name:input
 * @age:input
 * @owner:input
 * Description: 'the program's description'
 *
 *
 * Return: Always 0 (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
