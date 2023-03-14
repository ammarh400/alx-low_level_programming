#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 *argstostr - function
 *@av: pointer to pointer to char
 *@ac: int
 *Return: pointer to char
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i = 0;
	int j = 0;
	int k = 0;
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++)
		{
			len++;
		}
		j = 0;
		i++;
	}

	ptr = malloc(sizeof(char) * (len + ac + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;

	while (i < ac)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++)
		{
			ptr[k] = *(*(av + i) + j);
			k++;
		}
		i++;
		ptr[k] = '\n';
		k++;
	}

	ptr[k] = '\0';

	return (ptr);
}
