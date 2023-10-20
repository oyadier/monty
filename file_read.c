#include "monty.h"

/**
 * read_file - Reads the content of a file line by line.
 * @fd: Pointer to a file descriptor of an open file
 */

void read_file(FILE *fd)
{
	int line_n;
	int format;
	char *lineprt;
	size_t n;

	lineprt = NULL;
	n = 0;
	format = 0;

	if (!fd)
		printf("Error: Can't open file %s\n", "file_name");

	/*Getting each line in the file*/
	for (line_n = 1; getline(&lineprt, &n, fd) != EOF; line_n++)
		format = interpret_line(lineprt, line_n, format);

	free(lineprt);
}
