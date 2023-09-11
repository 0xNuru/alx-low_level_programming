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

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
