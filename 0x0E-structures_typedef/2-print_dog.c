#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: struct dog
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else

		printf("%s\n", d->name);

	if (d->age == NULL)
		printf("Age: (nil)\n");
	else
		printf("%f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("%s\n", d->owner);
}
