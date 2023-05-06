# C - malloc, free

In this project, I was looking at the following functions:

- malloc
- free

## Info

- All files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files end with a new line
- Code follows the Betty style. It was checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- Not allowed to use global variables
- No more than 5 functions per file
- `main.c` files were used to test the code
- The only C standard library functions allowed are `malloc` and `free`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden (Unless otherwise stated)
- Allowed to use [\_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
- Prototypes of all functions and the prototype of the function `_putchar` are included in the header file called `main.h`

## Tasks

- `0-create_array.c` - a function that creates an array of chars, and initializes it with a specific char
- `1-args.c` - a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter
- `2-str_concat.c` - a function that concatenates two strings
- `3-alloc_grid.c` - a function that returns a pointer to a 2 dimensional array of integers
- `4-free_grid.c` - a function that frees a 2 dimensional grid previously created by your alloc_grid function
- `100-argstostr.c` - a function that concatenates all the arguments of your program
