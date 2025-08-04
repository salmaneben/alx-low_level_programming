# 0x1C. C - Makefiles

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- What are `make`, Makefiles
- When, why and how to use Makefiles
- What are rules and how to set and use them
- What are explicit and implicit rules
- What are the most common / useful rules
- What are variables and how to set and use them

## Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`
- OS: Ubuntu 20.04 LTS
- Version of `gcc`: 9.3.0
- Version of `make`: GNU Make 4.2.1
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory

## More Info

In the following tasks, we are going to use [these files](https://github.com/holbertonschool/0x1C.c). We want to compile these files into an executable called `school`.

## Helper Files

- **school.c**: C function that displays a seahorse in text. Used for Makefile practice purposes throughout project.
- **main.c**: Main C function that runs the function defined in `school.c`.
- **m.h**: Header file defining the function prototype used in `school.c`.

## Tasks

### 0. make -f 0-Makefile
**File: `0-Makefile`**

Create your first Makefile.

Requirements:
- name of the executable: `school`
- rules: `all`
  - The `all` rule builds your executable
- variables: none

### 1. make -f 1-Makefile
**File: `1-Makefile`**

Requirements:
- name of the executable: `school`
- rules: `all`
  - The `all` rule builds your executable
- variables:
  - `CC`: the compiler to be used
  - `SRC`: the `.c` files

### 2. make -f 2-Makefile
**File: `2-Makefile`**

Create your first useful Makefile.

Requirements:
- name of the executable: `school`
- rules: `all`
  - The `all` rule builds your executable
- variables:
  - `CC`: the compiler to be used
  - `SRC`: the `.c` files
  - `OBJ`: the `.o` files
  - `NAME`: the name of the executable
- The `all` rule should recompile only the updated source files
- You are not allowed to have a list of all the `.o` files

### 3. make -f 3-Makefile
**File: `3-Makefile`**

Requirements:
- name of the executable: `school`
- rules: `all`, `clean`, `oclean`, `fclean`, `re`
  - `all`: builds your executable
  - `clean`: deletes all Emacs and Vim temporary files along with the executable
  - `oclean`: deletes the object files
  - `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
  - `re`: forces recompilation of all source files
- variables:
  - `CC`: the compiler to be used
  - `SRC`: the `.c` files
  - `OBJ`: the `.o` files
  - `NAME`: the name of the executable
  - `RM`: the program to delete files
- The `all` rule should recompile only the updated source files
- The `clean`, `oclean`, `fclean`, `re` rules should never fail
- You are not allowed to have a list of all the `.o` files

### 4. A complete Makefile
**File: `4-Makefile`**

Requirements:
- name of the executable: `school`
- rules: `all`, `clean`, `fclean`, `oclean`, `re`
  - `all`: builds your executable
  - `clean`: deletes all Emacs and Vim temporary files along with the executable
  - `oclean`: deletes the object files
  - `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
  - `re`: forces recompilation of all source files
- variables:
  - `CC`: the compiler to be used
  - `CFLAGS`: your favorite compiler flags: `-Wall -Werror -Wextra -pedantic`
  - `SRC`: the `.c` files
  - `OBJ`: the `.o` files
  - `NAME`: the name of the executable
  - `RM`: the program to delete files
- The `all` rule should recompile only the updated source files
- The `clean`, `oclean`, `fclean`, `re` rules should never fail
- You are not allowed to have a list of all the `.o` files

### 5. Island Perimeter
**File: `5-island_perimeter.py`**

**Technical interview preparation:**

You are not allowed to google anything
Whiteboard first
This task and all future technical interview prep tasks will include peer learning sessions. You are not allowed to look up anything online.

Create a function `def island_perimeter(grid):` that returns the perimeter of the island described in `grid`:

- `grid` is a list of list of integers:
  - 0 represents water
  - 1 represents land
  - Each cell is square, with a side length of 1
  - Cells are connected horizontally/vertically (not diagonally).
  - `grid` is rectangular, with its width and height not exceeding 100
- The grid is completely surrounded by water
- There is only one island (or nothing).
- The island doesn't have "lakes" (water inside that isn't connected to the water surrounding the island).

### 100. make -f 100-Makefile
**File: `100-Makefile`**

Requirements:
- name of the executable: `school`
- rules: `all`, `clean`, `fclean`, `oclean`, `re`
  - `all`: builds your executable
  - `clean`: deletes all Emacs and Vim temporary files along with the executable
  - `oclean`: deletes the object files
  - `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
  - `re`: forces recompilation of all source files
- variables:
  - `CC`: the compiler to be used
  - `CFLAGS`: your favorite compiler flags: `-Wall -Werror -Wextra -pedantic`
  - `SRC`: the `.c` files
  - `OBJ`: the `.o` files
  - `NAME`: the name of the executable
- The `all` rule should recompile only the updated source files
- The `clean`, `oclean`, `fclean`, `re` rules should never fail
- You are not allowed to have a list of all the `.o` files
- You have to use `$(RM)` for the cleaning up rules, but you are not allowed to set the `RM` variable
- You are not allowed to use the string `$(CFLAGS)` anywhere in your Makefile
- Your Makefile should work even if there is a file in the folder that has the exact same name as one of your rule
- Your Makefile should not compile if the header file `m.h` is missing
