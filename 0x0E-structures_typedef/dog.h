#ifndef dog_h
#define dog_h


/**
* struct dog - struct prototype
* @name: dog's name
* @owner: owner's name
* @age: dog's age
*
* Description: a dog data type
*/

typedef struct dog dog_t
{
	char *name;
	char *owner;
	float age;
};

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
