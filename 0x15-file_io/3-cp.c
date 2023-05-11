#include <stdlib.h>
#include <stdio.h>
#include "main.h"

char *creater(char *file_from);
void block(int Nana);

/**
 * creater - create a buffer with 1,024 bytes
 * @file_from: the name of the file
 *
 * Return: A pointer
 */

char *creater(char *file_from)
{
	char *file_to;

	file_to = malloc(sizeof(char) * 1024);

	if (file_to == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE %s\n", file_from);
		exit(99);
	}

	return (file_to);
}

/**
 * block - the locker to the program
 * @Nana: file descriptor
 */

void block(int Nana)
{
	int Ama;

	Ama = close(Nana);

	if (Ama == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %d\n", Nana);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: Number of arguments
 * @argv: Array to pointers of the arguments.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int Kojo, Jnr, Kwame, Adwoa;
	char *Aut;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	Aut = creater(argv[2]);
	Kojo = open(argv[1], O_RDONLY);
	Jnr = read(Kojo, Aut, 1024);
	Kwame = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (Kojo == -1 || Jnr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE %s\n", argv[1]);
			free(Aut);
			exit(98);
		}

		Adwoa = write(Kwame, Aut, Jnr);
		if (Kwame == -1 || Adwoa == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE %s\n", argv[2]);
			free(Aut);
			exit(99);
		}
		Jnr = read(Kojo, Aut, 1024);
		Kwame = open(argv[2], O_WRONLY | O_APPEND);

	}while (Jnr > 0);
	free(Aut);
	block(Kojo);
	block(Kwame);

	return (0);

}
