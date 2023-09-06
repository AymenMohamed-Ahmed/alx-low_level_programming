#include "main.h"

/**
* read_textfile - reads and prints a text file to standard output
* @filename: the name of the file to read
* @letters: the number of letters to read and print
*
* Return: the actual number of letters it could read and print
*         0 if the file can't be opened or read, filename is NULL,
*         or write fails to print the expected amount of bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t bytes_read, bytes_written;
char *buffer;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(fd);
return (0);
}

bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
free(buffer);
close(fd);
return (0);
}

bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
free(buffer);
close(fd);
return (0);
}

free(buffer);
close(fd);
return (bytes_written);
}
