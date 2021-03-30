#ifndef HOLBERTON_H
#define HOLBERTON_H

/* standar lib */
#include <stdio.h>
/* stdlib lib */
#include <stdlib.h>
/* string lib */
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>
/* 0. function that reads a text file and prints it to  */
/* the POSIX standard output. */
ssize_t read_textfile(const char *filename, size_t letters);
/* 1. Function that creates a file. */
int create_file(const char *filename, char *text_content);
/* 2. Function that appends text at the end of a file. */
int get_bit(unsigned long int n, unsigned int index);
int _putchar(char c);


#endif
