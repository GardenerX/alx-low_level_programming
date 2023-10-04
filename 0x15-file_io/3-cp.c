#include <stdlib.h>
#include <stdio.h>
#include "main.h"

char *buffer_made(char *stored);
void exiting_file(int fd);

/**
 * buffer_made - creates a buffer with 1024 bytes.
 * @stored: input buffer
 * Return: a pointer to the newly-allocated buffer.
 */
char *buffer_made(char *stored)
{
char *words;
words = malloc(sizeof(char) * 1024);
if (words == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", stored);
exit(99);
}
return (words);
}

/**
 * exiting_file - closes file descriptors
 * @fd:the file descriptor to be closed
 * Return: void
 */
void exiting_file(int fd)
{
int a;
a = close(fd);
if (a == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - copies the contents from  one file to another
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
int fix, top, a, b;
char *buf;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buf = buffer_made(argv[2]);
fix = open(argv[1], O_RDONLY);
a = read(fix, buf, 1024);
top = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (fix == -1 || a == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buf);
exit(98);
}
b = write(top, buf, a);
if (top == -1 || b == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buf);
exit(99);
}
a = read(fix, buf, 1024);
top = open(argv[2], O_WRONLY | O_APPEND);
} while (a > 0);
free(buf);
exiting_file(fix);
exiting_file(top);
return (0);
}
