#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: content written in the file
 * Return: 1 on success. -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
int fd, counter, s;

if (!filename)
return (-1);
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);
if (!text_content)
text_content = "";
for (counter = 0; text_content[counter]; counter++)
;
s = write(fd, text_content, counter);
if (s == -1)
return (-1);
close(fd);
return (1);
}
