# C - Function pointers

In this project, I was looking at the following concept:

- Function pointers

## Requirements

- All files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files end with a new line
- Code follows the Betty style. It was checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- Not allowed to use global variables
- No more than 5 functions per file
- `main.c` files were used to test the code
- The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `print`f, `puts`, `calloc`, `realloc` etc… is forbidden (Unless otherwise stated)
- Allowed to use [\_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
- The prototypes of all functions are included in the header file called `function_pointers.h`
- Header file is include guarded

## Tasks

- `0-print_name.c` - a function that prints a name
- `1-array_iterator.c` - a function that executes a function given as a parameter on each element of an array
- `2-int_index.c` - a function that searches for an integer
- `3-calc.h` - contains all the function prototypes and data structures used by the program
- `3-get_op_func.c` - contains the function that selects the correct function to perform the operation asked by the user
- `3-main.c` - contains main function only
