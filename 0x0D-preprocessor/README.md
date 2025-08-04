# 0x0D. C - Preprocessor

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- What are macros and how to use them
- What are the most common predefined macros
- How to include guard your header files

## Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
- You are allowed to use `_putchar`
- You don't have to push `_putchar.c`, we will use our file. If you do it won't be taken into account
- In the following examples, the `main` files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own `main` files at compilation. Our `main` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don't forget to push your header file
- All your header files should be include guarded

## Tasks

### 0. Object-like Macro
**File: `0-object_like_macro.h`**

Create a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.

### 1. Pi
**File: `1-pi.h`**

Create a header file that defines a macro named `PI` as an abbreviation for the token `3.14159265359`.

### 2. File name
**File: `2-main.c`**

Write a program that prints the name of the file it was compiled from, followed by a new line.
- You are allowed to use the standard library

### 3. Function-like macro
**File: `3-function_like_macro.h`**

Write a function-like macro `ABS(x)` that computes the absolute value of a number `x`.

### 4. SUM
**File: `4-sum.h`**

Write a function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.

### 100. Multiple inclusion
**File: `101-preprocessor_abuse.c`**

Write a program that can print `Hello, Holberton`, followed by a new line.
- You are not allowed to use more than one string literal in your code
- You are not allowed to use any semicolon or curly braces `{}` in your C file `101-preprocessor_abuse.c`
- You are not allowed to use the function `printf`
- Your code should be exactly 3 lines long
- You are allowed to use the preprocessor
- You are not allowed to have more than one C statement in your file
