#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - Returns pointer to allocated memory
 *@str: string
 *Return: Pointer
 */

char *_strdup(char *str)
{
	int length, i;
	charr *arr;

	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;
	while (*(str + length) != '\0')
	{
		length++;
	}

	arr = (char*) malloc(length * sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		arr[i] = str[i];
	}
	arr[i] = '\0';

	return (arr);
}

/**
 *new_dog - Creates new dog
 *@name: Dog's name
 *@age: Dog's age
 *@owner: Dog's owner
 *Return: new_dog (dog_t)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	git_t *doggy;
	char *doggy_name, *doggy_owner;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy_name = _strdup(name);
	if (doggy_name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	doggy_onwer = _strdup(owner);
	if (doggy_owner == NULL)
	{
		free(doggy_name);
		free(doggy);
		return (NULL);
	}
	doggy->name = doggy_name;
	doggy->age = age;
	doggy->owner = doggy_owner;
	return (doggy);
}
