#ifndef DOG
#define DOG
/**
 *struct dog - stucture
 *@name: char for entering the dogs age
 *@age: float for entering the dogs age
 *@owner: char for entering the owners name
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
