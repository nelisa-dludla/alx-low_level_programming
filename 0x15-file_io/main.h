#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stddef.h>
#include <sys/types.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_usage_error(void);
void print_read_error(char *filename);
void print_write_error(char *filename);
void print_close_error(int fd);

#endif /* MAIN_H */
