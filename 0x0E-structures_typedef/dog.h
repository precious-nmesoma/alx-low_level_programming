#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dogs
 * @name: number one
 * @owner: number two
 * @age: number three
 */
struct dog
{
	char *name;
	float age;
	char *owne;
}

/**
 * dog_t - Typedef for struct dog
 */


typedef struct dog dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H_ */
