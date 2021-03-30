#include "holberton.h"
#include <stdio.h>
#include <unistd.h>
/**
 * main - Take a file and copy it to another file.
 * @argc: arguments to get the files
 * @argv: arguments to copy.
 * Return: Always 0
 */

int main(int argc, char const *argv[])
{
	int file_from, file_to, read_file, write_file;
	char bufffer[1024];

	if (argc != 3)
	{	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/* Read, Create and Trunc the file whit -rw-rw-r-- */
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{	dprintf(STDERR_FILENO, "rror: Can't write to %s\n", argv[2]);
		exit(99);
	}
	read_file = read(file_from, bufffer, 1024);
	if (read_file == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	write_file = write(file_to, bufffer, read_file);
	if (write_file == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (close(file_from) == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
}
