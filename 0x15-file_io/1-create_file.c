#include "main.h"
#include <stddef.h>

/**
 * create_file - Write a function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: Path of the file
 * @text_content: what is in the file
 * Return: Null if filename returns 0 or if file can't be open
 * returns the actual number of letters if could read and write
 */

int create_file(const char *filename, char *text_content)
{
	int j = 0, file;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	while ('text_content[j] != '\0')
	{
		j++;
	}
	file = open(filename, 0_CREAT | 0_WRONLY | 0_TRUNC, 0600);
	if (file == -1)
		return (-1);
	write(file, text_content, j);
	return (1);
}
