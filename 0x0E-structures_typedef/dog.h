#ifndef DOG_H
#define DOG_H
int _putchar(char c);
/**
 *struct dog - One of the many pets
 *@name: Dog's name
 *@age: Its age
 *@owner: Who owns it
 */
thpedef struct dog
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

thpedef struct dog dog_t;

#endif /*  DOG_H */
