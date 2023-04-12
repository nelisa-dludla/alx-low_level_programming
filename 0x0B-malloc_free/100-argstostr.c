#include "main.h"
#include <stdlib.h>
#include <string.h>

/*
 * This function concatenates all the arguments of the program
 */

/**
 * argstostr - Function concatenates all the arguments of the program
 * @ac: Argument count
 * @av: Argument vector
 * Return: new (Success) || NULL (Failure)
 */

char *argstostr(int ac, char **av)
{
	char *new;
	int i, j, str_len;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	str_len = 0;

	for (i = 0; i < ac; i++)
	{	
		str_len = str_len + strlen(av[i]); 
	}

	new = (char *) malloc((str_len + ac) * sizeof(char));

	if (new == NULL)
	{
		return (NULL);
	}

	for (i = 0, j = 0; i < ac; i++)
	{
		strcpy(new + j, av[i]);
		j = j + strlen(av[i]);
		new[j++] = '\n';
	}

	new[str_len + ac] = '\0';

	return (new);
}
