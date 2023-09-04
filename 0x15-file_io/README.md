# 0x15. C - File I/O

This directory contains solutions to various file input/output (I/O) problems in C programming. It includes functions that perform tasks such as reading from and writing to text files, creating and appending text content, and copying file contents.

## Solutions

### 1. Reading and Printing a Text File

File: `0-read_textfile.c`

This function reads a text file and prints its contents to the POSIX standard output. It takes two parameters: `filename`, which is the name of the file to read, and `letters`, the number of letters to read and print. The function returns the actual number of letters it successfully read and printed.

### 2. Creating a Text File

File: `1-create_file.c`

This function creates a text file with a specified `filename` and writes the contents of the `text_content` string to it. It returns 1 on success and -1 on failure.

### 3. Appending Text to a File

File: `2-append_text_to_file.c`

This solution includes a function to get the value of a specific bit at a given index. It uses bitwise AND operation to check the value of the bit at the specified index.

### 4. File Copying

File: `3-cp.c`

This program copies the content of one file (file_from) to another file (file_to). It has the following usage:

`cp file_from file_to`

## Notes

These solutions are provided as examples of file I/O operations in C programming and serve for educational purposes. Feel free to explore, modify, and experiment with the code to enhance your understanding of file operations in C.
