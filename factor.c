#include "factor.h"

/**
 * main - main function
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	FILE *fptr;
	size_t count;
	ssize_t line;
	char *buffer = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: factor <filename>\n");
		exit(EXIT_FAILURE);
	}
	while ((line = getline(&buffer, &count, fptr)) != -1)
	{
		factorize(buffer);
	}
	return (0);
}
