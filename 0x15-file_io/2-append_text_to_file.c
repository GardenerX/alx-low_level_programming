#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file to append
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, a, counter = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (counter = 0; text_content[counter]; counter++)
fd = open(filename, O_WRONLY | O_APPEND);
a = write(fd, text_content, counter);
}
if (fd == -1 || a == -1)
return (-1);
close(fd);
return (1);
}
