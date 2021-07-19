#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print dog
 *
 * @d: pointer to struct dog
 *
 * Return: Name, Age and Owner
 *         nil if d is null
 *         Name: (nil) if name is null
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("(nil)");
	if ((*d).name == NULL)
		printf("Name: (nil)");
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
