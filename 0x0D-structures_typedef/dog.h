#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - dog information
 * @name: name of the dog
 * @age:  age of the dog
 * @owner: name of the dog's owner
 *
 * Description: struct dog provides information about individual dogs,
 * including name of the dog, age of the dog, and name of the dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
