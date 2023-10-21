#include "monty.h"

/**
 * open_file - Opens a file
 * @file_name: String with the name of the file
 *
 * Return: void
 */

void open_file(char *file_name)
{
	int file_check;
	FILE *fd;

	if (file_name == NULL)
	{
		printf("Error: Can't open file %s\n", file_name);
		free_nodes();
		exit(EXIT_FAILURE);
	}
	file_check = access(file_name, R_OK);
	if (file_check == -1)
	{
		printf("Error: Can't open file %s\n", file_name);
		free_nodes();
		exit(EXIT_FAILURE);
	}
	fd = fopen(file_name, "r");
	if (fd == NULL)
	{
		printf("Error: Can't open file %s\n", file_name);
		free_nodes();
		exit(EXIT_FAILURE);
	}
	read_file(fd);
	fclose(fd);
}
