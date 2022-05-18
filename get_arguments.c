#include "shell.h"
/**
 * get_arguments - Takes the arguments of the main
 * @buffer: arguments of the main
 * @cont: number of arguments
 * Return: the variable tokens what are the arguments.
 */
char **get_arguments(char *buffer, int cont)
{
	int i = 0;
	char **array_strings = NULL;
	char *token = strtok(buffer, " \t\n");

	/*array of pointers to string*/
	array_strings = malloc((cont + 1) * sizeof(char *));
	if (array_strings == NULL)
	{
		free(array_strings);
		return (NULL);
	}
	while (token != NULL)
	{
		array_strings[i] = token; /* string is saved to a pointer */
		i++;
		token = strtok(NULL, " \t\n"); /* read through the token */
	}
	array_strings[i] = NULL;
	return (array_strings);
}
