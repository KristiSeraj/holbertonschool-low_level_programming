#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int file, write_f, i, len = 0;

	i = 0;
	while (text_content[i] != '\0')
	{
		len++;
		i++;
	}
	if (filename == NULL)
		return (-1);
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	write_f = write(file, text_content, len);
	if (write_f == -1)
		return (-1);
	close(file);
	return (1);
}
