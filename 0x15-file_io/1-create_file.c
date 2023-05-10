#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * create_file - creates a file.
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the fil
 * Return: 1 on success, -1 on failure
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int Ewura, Abena, Nana;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (Nana = 0; text_content[Nana];)
			Nana++;
	}

	Abena = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	Ewura = write(Abena, text_content, Nana);

	if (Ewura == -1 || Abena == -1)
		return (-1);

	close(Abena);

	return (1);
}
