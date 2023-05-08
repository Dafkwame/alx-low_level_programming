#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to STDOUT.
 * @filename: The file name
 * @letters: number of letters that can be printed
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *Ewura;
	ssize_t Nana;
	ssize_t Adwoa;
	ssize_t Ama;

	Nana = open(filename, O_RDONLY);
	if (Nana == -1)
		return (0);
	Ewura = malloc(sizeof(char) * letters);
	Ama = read(Nana, Ewura, letters);
	Adwoa = write(STDOUT_FILENO, Ewura, Ama);

	free(Ewura);
	close(Nana);
	return (Adwoa);
}
