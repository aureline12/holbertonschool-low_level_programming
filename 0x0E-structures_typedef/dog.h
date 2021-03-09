#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure of dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
/* Prototype 1 */
void init_dog(struct dog *d, char *name, float age, char *owner);
/* Prototype 2 */
void print_dog(struct dog *d);

#endif

