#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 * Return: numbers of letters printed. or, returns 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
ssize_t d, r;
if (!filename)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buffer = malloc(sizeof(char) * (letters));
if (!buffer)
return (0);
d = read(fd, buffer, letters);
r = write(STDOUT_FILENO, buffer, d);
close(fd);
free(buffer);
return (r);
}
