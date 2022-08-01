# Make files

- [0-Makefile](https://github.com/KristiSeraj/holbertonschool-low_level_programming/blob/main/0x1C-makefiles/0-Makefile) - Name of the executable: `school`
  - rules: `all`
    - The `all` rule builds your executable
  - variables: none 

- [1-Makefile](https://github.com/KristiSeraj/holbertonschool-low_level_programming/blob/main/0x1C-makefiles/1-Makefile) - Name of the executable: `school`
  - rules: `all`
    - The `all` rule builds your executable
  - variables: `CC`, `SRC`
    - `CC`: the compiler to be used
    - `SRC`: the `.c` files

- [2-Makefile](https://github.com/KristiSeraj/holbertonschool-low_level_programming/blob/main/0x1C-makefiles/2-Makefile) - Name of the executable: `school`
  - rules: `all`
    - The `all` rule builds your executable
  - variables: `CC`, `SRC`, `OBJ`, `NAME`
    - `CC`: the compiler to be used
    - `SRC`: the `.c` files
    - `OBJ`: the `.o` files
    - `NAME`: the name of the executable
  - The `all` rule should recompile only the updated source file

- [3-Makefile](https://github.com/KristiSeraj/holbertonschool-low_level_programming/blob/main/0x1C-makefiles/3-Makefile) - Name of the executable: `school`
  - rules: `all`, `clean`, `oclean`, `fclean`, `re`
    - `all`: builds your executable
    - `clean`: deletes all Emacs and Vim temproray files along with the executable
    - `oclean`: deletes the object files
    - `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
    - `re`: forces recompilation of all source files
  - variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`
    - `CC`: the compiler to be used
    - `SRC`: the `.c` files
    - `OBJ`: the `.o` files
    - `NAME`: the name of the executable
    - `RM`: the program to delete files
  - The `all` rule should recompile only the updated source file
  - The `clean`, `oclean`, `fclean`, `re` should never fail

- [4-Makefile](https://github.com/KristiSeraj/holbertonschool-low_level_programming/blob/main/0x1C-makefiles/4-Makefile) - Name of the executable: `school`
  - rules: `all`, `clean`, `oclean`, `fclean`, `re`
    - `all`: builds your executable
    - `clean`: deletes all Emacs and Vim temproray files along with the executable
    - `oclean`: deletes the object files
    - `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
    - `re`: forces recompilation of all source files
  - variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
    - `CC`: the compiler to be used
    - `SRC`: the `.c` files
    - `OBJ`: the `.o` files
    - `NAME`: the name of the executable
    - `RM`: the program to delete files
    - `CFLAGS`: your favorite compiler flags: `-Wall -Werror -Wextra -pedantic`
  - The `all` rule should recompile only the updated source file
  - The `clean`, `oclean`, `fclean`, `re` should never fail

- [5-island_perimeter.py](https://github.com/KristiSeraj/holbertonschool-low_level_programming/blob/main/0x1C-makefiles/5-island_perimeter.py) - Finds the perimeter of an island

- [5-main.c](https://github.com/KristiSeraj/holbertonschool-low_level_programming/blob/main/0x1C-makefiles/5-main.py) - Test file for `5-island_perimeter.py`

- [m.h](https://github.com/KristiSeraj/holbertonschool-low_level_programming/blob/main/0x1C-makefiles/m.h) - Header file

- [main.c](https://github.com/KristiSeraj/holbertonschool-low_level_programming/blob/main/0x1C-makefiles/main.c) - Main .C file which executes `school.c` file

- [school](https://github.com/KristiSeraj/holbertonschool-low_level_programming/blob/main/0x1C-makefiles/school) - Executable file

- [school.c](https://github.com/KristiSeraj/holbertonschool-low_level_programming/blob/main/0x1C-makefiles/school.c) - C file that prints Holberton Logo
