# C - Variadic functions

In this project, I was looking at the following concept:

- Variadic functions

## Requirements

- All files were compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files end with a new line
- Code follows the Betty style. It was checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- Not allowed to use global variables
- No more than 5 functions per file
- `main.c` files were used to test the code
- The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden (Unless otherwise stated)
- Allowed to use the following macros: `va_start`, `va_arg` and `va_end`
- Allowed to use [\_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
- The prototypes of all your functions and the prototype of the function`_putchar` should be included in your header file called `variadic_functions.h`
- Header file is include guarded

## Tasks

- `0-sum_them_all.c` - a function that returns the sum of all its parameters
- `1-print_numbers.c` - a function that prints numbers, followed by a new line
- `2-print_strings.c` - a function that prints strings, followed by a new line
- `3-print_all.c` - a function that prints anything
