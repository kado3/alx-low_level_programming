#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#define BUFFER_SIZE 1024
/**
* main - Copy content from one file to another
* @argc: The number of command line arguments
* @argv: An array of command line argument strings
* Return: 0 on success, or an error code on failure
*/
int main(int argc, char *argv[])
{
int fd_from, fd_to, read_bytes, write_bytes;
char buffer[BUFFER_SIZE];
char *file_from, *file_to;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}
file_from = argv[1];
file_to = argv[2];
fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
exit(98);
}
fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
close(fd_from);
exit(99);
}

while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
write_bytes = write(fd_to, buffer, read_bytes);
if (write_bytes != read_bytes)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
close(fd_from);
close(fd_to);
exit(99);
}
}
if (read_bytes == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
close(fd_from);
close(fd_to);
exit(98);
}
if (close(fd_from) == -1 || close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", errno);
exit(100);
}
return (0);
}
