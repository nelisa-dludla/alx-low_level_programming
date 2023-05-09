# C - File I/O

In this project, I looked at the following concept:

- File I/O

## Info

- All files were compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files end with a new line
- Code follows the Betty style. It was checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- Use of global variables was not allowed
- No more than 5 functions per file
- Authorized functions and marcos are `malloc`, `free`, and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden (Unless otherwise stated)
- Allowed syscalls: `read`, `write`, `open`, `close`
- Allowed to use [\_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
- The `main.c` files were used to test the functions
- The prototypes of all functions are included in the header file called `main.h`
- Header file is include guarded

## Tasks

- `0-read_textfile.c` - a function that reads a text file and prints it to the `POSIX` standard output
- `1-create_file.c` - a function that creates a file
- `2-append_text_to_file.c` - a function that appends text at the end of a file
- `3-cp.c` - a program that copies the content of a file to another file
