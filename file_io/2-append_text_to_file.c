#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: The file's name.
 * @text_content: The file's content.
 * Return: 1 on sucess or -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t length = 0;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (text_content == NULL)
	{
		text_content = "";
	}
	while (text_content[length] != '\0')
	{
		length++;
	}
	if (fd == -1)
	{
		return (-1);
	}
	if (write(fd, text_content, length) == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
