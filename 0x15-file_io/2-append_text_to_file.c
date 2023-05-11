#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 * Do not create the file if it does not exist
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not exist or
 * if you do not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int Nana, Ewura, Abena;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (Nana = 0; text_content[Nana];)
			Nana++;
	}

	Abena = open(filename, O_WRONLY | O_APPEND);
	Ewura = write(Abena, text_content, Nana);

	if (Abena == -1 || Ewura == -1)
		return (-1);

	close(Abena);

	return (1);
}
