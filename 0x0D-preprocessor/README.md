# C - Preprocessor

In this project, I was looking at the following topic:

- Preprocessor

## Requirements

- All files were compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files end with a new line
- Code follows the Betty style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- Not allowed to use global variables
- No more than 5 functions per file
- `main.c` files were used to test the code
- The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden (Unless otherwise stated)
- Allowed to use [\_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
- Header file is include guarded

## Tasks

- `0-object_like_macro.h` - a header file that defines a macro named SIZE as an abbreviation for the token 1024
- `1-pi.h` - a header file that defines a macro named PI as an abbreviation for the token 3.14159265359
- `2-main.c` - a program that prints the name of the file it was compiled from, followed by a new line
- `3-function_like_macro.h` - a function-like macro ABS(x) that computes the absolute value of a number x
- `4-sum.h` - a function-like macro SUM(x, y) that computes the sum of the numbers x and y
