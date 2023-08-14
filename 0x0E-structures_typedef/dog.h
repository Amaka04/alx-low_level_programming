#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - a struct that creates a dog info
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Description: dog struct project
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
