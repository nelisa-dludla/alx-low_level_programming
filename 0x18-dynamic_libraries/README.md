## 0x18. C - Dynamic libraries

This directory contains solutions to dynamic library problems in C.

## Solutions

### 0. A library is not a luxury but one of the necessities of life

Files: `libdynamic.so, main.h`

Created a dynamic library `libdynamic.so` containing all the functions listed below:

```
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```

### 1. Without libraries what have we? We have no past and no future 

File: `1-create_dynamic_lib.sh`

Script creates a dynamic library called `liball.so` from all the `.c` files that are in the current directory.

## Notes

These solutions are provided as examples dynamic libraries in C and serve for educational purposes. Feel free to explore, modify, and experiment with the code to enhance your understanding of dynamic libraries in C.

