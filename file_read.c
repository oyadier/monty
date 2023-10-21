#include "monty.h"

/**
 * read_file - reads the content of a file
 * @fd: Pointer to a file descriptor of an open file
 *
 * Return: Nothing
 */

void read_file(FILE *fd)
{
	int tmp;
	int format = 0;
	char *lineprt = NULL;
	size_t n;

	n = 0;

	if (!fd)
	{
		printf("Error: Can't open file %s\n", "file_name");
		free_nodes();
		exit(EXIT_FAILURE);
	}

	for (tmp = 1; getline(&lineprt, &n, fd) != EOF; tmp++)
		format = interpret_line(lineprt, tmp, format);

	free(lineprt);
}
