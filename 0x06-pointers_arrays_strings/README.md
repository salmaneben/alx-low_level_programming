# 0x06. C - More pointers, arrays and strings

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- What are pointers and how to use them
- What are arrays and how to use them
- What are the differences between pointers and arrays
- How to use strings and how to manipulate them
- Scope of variables

## Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
- You are allowed to use `_putchar`
- You don't have to push `_putchar.c`, we will use our file. If you do it won't be taken into account
- In the following examples, the `main` files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own `main` files at compilation. Our `main` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don't forget to push your header file

## Tasks

### 0. strcat
**File: `0-strcat.c`**

Write a function that concatenates two strings.
- Prototype: `char *_strcat(char *dest, char *src);`
- This function appends the `src` string to the `dest` string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte
- Returns a pointer to the resulting string `dest`

### 1. strncat
**File: `1-strncat.c`**

Write a function that concatenates two strings.
- Prototype: `char *_strncat(char *dest, char *src, int n);`
- The `_strncat` function is similar to the `_strcat` function, except that it will use at most `n` bytes from `src`; and `src` does not need to be null-terminated if it contains `n` or more bytes
- Return a pointer to the resulting string `dest`

### 2. strncpy
**File: `2-strncpy.c`**

Write a function that copies a string.
- Prototype: `char *_strncpy(char *dest, char *src, int n);`
- Your function should work exactly like `strncpy`

### 3. strcmp
**File: `3-strcmp.c`**

Write a function that compares two strings.
- Prototype: `int _strcmp(char *s1, char *s2);`
- Your function should work exactly like `strcmp`

### 4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy
**File: `4-rev_array.c`**

Write a function that reverses the content of an array of integers.
- Prototype: `void reverse_array(int *a, int n);`
- Where `n` is the number of elements of the array

### 5. Always look up
**File: `5-string_toupper.c`**

Write a function that changes all lowercase letters of a string to uppercase.
- Prototype: `char *string_toupper(char *);`

### 6. Expect the best. Prepare for the worst. Capitalize on what comes
**File: `6-cap_string.c`**

Write a function that capitalizes all words of a string.
- Prototype: `char *cap_string(char *);`
- Separators of words: space, tabulation, new line, `,`, `;`, `.`, `!`, `?`, `"`, `(`, `)`, `{`, and `}`

### 7. Mozart composed his music not for the elite, but for everybody
**File: `7-leet.c`**

Write a function that encodes a string into [1337](https://en.wikipedia.org/wiki/Leet).
- Prototype: `char *leet(char *);`
- Letters `a` and `A` should be replaced by `4`
- Letters `e` and `E` should be replaced by `3`
- Letters `o` and `O` should be replaced by `0`
- Letters `t` and `T` should be replaced by `7`
- Letters `l` and `L` should be replaced by `1`
- You can only use one `if` in your code
- You can only use two loops in your code
- You are not allowed to use `switch`
- You are not allowed to use any ternary operation

### 100. rot13
**File: `100-rot13.c`**

Write a function that encodes a string using [rot13](https://en.wikipedia.org/wiki/ROT13).
- Prototype: `char *rot13(char *);`
- You can only use `if` statement once in your code
- You can only use two loops in your code
- You are not allowed to use `switch`
- You are not allowed to use any ternary operation

### 101. Numbers have life; they're not just symbols on paper
**File: `101-print_number.c`**

Write a function that prints an integer.
- Prototype: `void print_number(int n);`
- You can only use `_putchar` function to print
- You are not allowed to use `long`
- You are not allowed to use arrays or pointers
- You are not allowed to hard-code special values

### 102. A dream doesn't become reality through magic; it takes sweat, determination and hard work
**File: `102-magic.c`**

Add one line to this code, so that the program prints `a[2] = 98`, followed by a new line.
- You are not allowed to use the variable `a` in your new line of code
- You are not allowed to modify the variable `p`
- You can only write one statement
- You are not allowed to use `,`
- You are not allowed to code anything else than the line of code asked
- Your code should be written at line 19, before the `;`
- Do not remove anything from the initial code (not even the comments)

### 103. Infinite add
**File: `103-infinite_add.c`**

Write a function that adds two numbers.
- Prototype: `char *infinite_add(char *n1, char *n2, char *r, int size_r);`
- Where `n1` and `n2` are the two numbers
- `r` is the buffer that the function will use to store the result
- `size_r` is the buffer size
- The function returns a pointer to the result
- You can assume that you will always get positive numbers, or `0`
- You can assume that there will be only digits in the strings `n1` and `n2`
- `n1` and `n2` will never be empty
- If the result can not be stored in `r` the function must return `0`

### 104. Noise is a buffer, more effective than cubicles or booth walls
**File: `104-print_buffer.c`**

Write a function that prints a buffer.
- Prototype: `void print_buffer(char *b, int size);`
- The function must print the content of `size` bytes of the buffer pointed by `b`
- The output should print 10 bytes per line
- Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with `0`
- Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space
- Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print `.`
- Each line ends with a new line `\n`
- If `size` is 0 or less, the output should be a new line only `\n`
- You are allowed to use the standard library
- The output should look exactly like the `hexdump -C` command
