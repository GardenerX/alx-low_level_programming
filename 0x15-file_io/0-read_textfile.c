#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *texts;
ssize_t fd, a, b;
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
texts = malloc(sizeof(char) * letters);
b = read(fd, texts, letters);
a = write(STDOUT_FILENO, texts, b);
free(texts);
close(fd);
return (a);
}
