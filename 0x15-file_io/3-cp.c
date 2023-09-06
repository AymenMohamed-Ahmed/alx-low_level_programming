#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* error_msg - print an error message to standard error
* @exit_code: the exit code to use
* @format: the format string
*/
void error_msg(int exit_code, const char *format, ...)
{
va_list args;

va_start(args, format);
dprintf(2, format, args);
va_end(args);

exit(exit_code);
}

/**
* main - copy the content of one file to another
* @ac: the argument count
* @av: the argument vector
*
* Return: 0 on success, or the exit code on failure
*/
int main(int ac, char **av)
{
int fd_from, fd_to, bytes_read, bytes_written;
char buffer[1024];

if (ac != 3)
error_msg(97, "Usage: cp file_from file_to\n");

fd_from = open(av[1], O_RDONLY);
if (fd_from == -1)
error_msg(98, "Error: Can't read from file %s\n", av[1]);

fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC,
		S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
if (fd_to == -1)
error_msg(99, "Error: Can't write to %s\n", av[2]);

while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
close(fd_from);
close(fd_to);
error_msg(99, "Error: Can't write to %s\n", av[2]);
}
}

if (bytes_read == -1)
error_msg(98, "Error: Can't read from file %s\n", av[1]);

if (close(fd_from) == -1)
error_msg(100, "Error: Can't close fd %d\n", fd_from);

if (close(fd_to) == -1)
error_msg(100, "Error: Can't close fd %d\n", fd_to);

return (0);
}
