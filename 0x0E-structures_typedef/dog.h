#ifndef DOG_H
#define DOG_H

/**
 * struct dog - basic dog info
 * @name: first member
 * @age: second member
 * @owner: third member
 */
struct dog{
	char *name;
	float age;
	char owner;
};

/*
 * doggie - typedef for struct dog*/
typedef struct dog doggie;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif