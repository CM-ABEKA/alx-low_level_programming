#ifndef DOG_H
#define DOG_H

/**
 * struct dog - this structure contains the details of a dog object
 * @name: This is the name of the dog
 * @age: This is the age of the dog
 * @owner: The owner of the dog
 *
 * Description: This is a stuct of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
