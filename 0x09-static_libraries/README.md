# C - Static libraries

In this project, I was looking at the following concept:

- C static libraries

## Info

### C

- All files were compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files end with a new line
- Code follows the Betty style. It was checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- Not allowed to use global variables
- No more than 5 functions per file
- Not allowed to use the standard library. Any use of functions like `printf, puts,` etc… is forbidden
- Allowed to use [\_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
- Prototypes of all functions and the prototype of the function `_putchar` are included in the header file called `main.h`
- Not allowed to use any kind of loops
- Not allowed to use static variables

### Bash

- All scripts were tested on Ubuntu 20.04 LTS
- All files end with a new line
- The first line of all files will be exactly `#!/bin/bash`
- A README.md file, at the root of the folder of the project, describing what each script is doing
- All files are executable

## Tasks

- `libmy.a` - a static library containing functions
- `create_static_lib.sh` - a script that creates a static library called `liball.a` from all the `.c` files that are in the current directory
