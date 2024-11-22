#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * new_dog - init
  * @name: name
  * @age: age
  * @owner: owner
  * Return: new_dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, sizen, sizeo;

	if (name == NULL)
		sizen = 0;
	else
		sizen = sizeof(name);
	if (owner == NULL)
		sizeo = 0;
	else
		sizeo = sizeof(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * sizen + 1);
	dog->owner = malloc(sizeof(char) * sizeo + 1);
	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < sizen + sizeo; i++)
	{
		if (i < sizen)
			dog->name[i] = name[i];
		else
			dog->owner[i - sizen] = owner[i - sizen];
	}
	dog->name[sizen] = '\0';
	dog->owner[sizeo] = '\0';
	dog->age = age;
	return (dog);
}
