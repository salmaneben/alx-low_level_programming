# ALX Low Level Programming

Welcome to the ALX Low Level Programming repository! This repository contains all the projects and exercises for the low-level programming curriculum at ALX School. The projects are designed to teach the fundamentals of C programming, memory management, data structures, and algorithms.

## Table of Contents

- [About](#about)
- [Learning Objectives](#learning-objectives)
- [Projects](#projects)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [File Structure](#file-structure)
- [Best Practices](#best-practices)
- [Tools Used](#tools-used)
- [Author](#author)
- [Acknowledgments](#acknowledgments)

## About

This repository contains solutions to various C programming challenges, from basic syntax and concepts to advanced topics like memory management, data structures, and system programming. Each project directory contains its own README with specific requirements and learning objectives.

**Total Projects**: 25 directories covering the complete ALX low-level programming curriculum
- 🟢 **Basic Programming** (5 projects): Hello World through advanced functions
- 🔵 **Pointers & Arrays** (4 projects): Memory management fundamentals  
- 🟡 **Memory Management** (4 projects): Dynamic allocation and libraries
- 🟠 **Advanced Concepts** (4 projects): Preprocessor, structures, function pointers
- 🔴 **Data Structures** (5 projects): Lists, hash tables, bit manipulation
- 🟣 **Advanced Topics** (3 projects): Makefiles, algorithms, and complexity

## Learning Objectives

By completing these projects, you will learn:

### Core Programming Skills
- **C Programming Fundamentals**: Variables, functions, loops, conditionals
- **Memory Management**: malloc, free, memory allocation and deallocation
- **Pointers and Arrays**: Understanding memory addresses and pointer arithmetic
- **String Manipulation**: Working with C strings and string functions
- **Debugging**: Using tools like gdb and valgrind effectively

### Advanced Programming Concepts  
- **Data Structures**: Linked lists, hash tables, binary trees
- **File I/O**: Reading from and writing to files
- **System Programming**: Understanding how programs interact with the OS
- **Algorithms**: Sorting, searching, and optimization techniques
- **Code Quality**: Betty coding style, documentation, and best practices

### Development Tools & Practices
- **Compilation**: Using gcc with various flags and options
- **Build Systems**: Creating and using Makefiles
- **Version Control**: Git workflows and repository management
- **Testing**: Writing test cases and debugging code
- **Performance**: Big O notation and algorithm complexity analysis

## Projects

### Basic Programming
- **[0x00-hello_world](./0x00-hello_world)**: Introduction to C programming
- **[0x01-variables_if_else_while](./0x01-variables_if_else_while)**: Variables, conditionals, and loops
- **[0x02-functions_nested_loops](./0x02-functions_nested_loops)**: Functions and nested loops
- **[0x03-debugging](./0x03-debugging)**: Debugging techniques and tools
- **[0x04-more_functions_nested_loops](./0x04-more_functions_nested_loops)**: Advanced functions and loops

### Pointers, Arrays, and Strings
- **[0x05-pointers_arrays_strings](./0x05-pointers_arrays_strings)**: Introduction to pointers and arrays
- **[0x06-pointers_arrays_strings](./0x06-pointers_arrays_strings)**: More pointers, arrays, and strings
- **[0x07-pointers_arrays_strings](./0x07-pointers_arrays_strings)**: Even more pointers and multidimensional arrays
- **[0x08-recursion](./0x08-recursion)**: Recursive functions and algorithms

### Memory Management
- **[0x09-static_libraries](./0x09-static_libraries)**: Creating and using static libraries
- **[0x0A-argc_argv](./0x0A-argc_argv)**: Command line arguments
- **[0x0B-malloc_free](./0x0B-malloc_free)**: Dynamic memory allocation
- **[0x0C-more_malloc_free](./0x0C-more_malloc_free)**: Advanced memory management

### Advanced Concepts
- **[0x0D-preprocessor](./0x0D-preprocessor)**: C preprocessor and macros
- **[0x0E-structures_typedef](./0x0E-structures_typedef)**: Structures and type definitions
- **[0x0F-function_pointers](./0x0F-function_pointers)**: Function pointers and callbacks
- **[0x10-variadic_functions](./0x10-variadic_functions)**: Functions with variable arguments

### Data Structures
- **[0x12-singly_linked_lists](./0x12-singly_linked_lists)**: Singly linked lists
- **[0x13-more_singly_linked_lists](./0x13-more_singly_linked_lists)**: Advanced linked list operations
- **[0x14-bit_manipulation](./0x14-bit_manipulation)**: Bitwise operations
- **[0x15-file_io](./0x15-file_io)**: File input/output operations
- **[0x1A-hash_tables](./0x1A-hash_tables)**: Hash tables implementation

### Advanced Topics
- **[0x1C-makefiles](./0x1C-makefiles)**: Creating and using Makefiles
- **[0x1E-search_algorithms](./0x1E-search_algorithms)**: Search algorithms and complexity analysis

## Requirements

### General
- **Editors**: vi, vim, emacs
- **Compiler**: gcc with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **OS**: Ubuntu 20.04 LTS
- **Style**: Betty coding style
- **Documentation**: All functions must be documented

### Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output
```

### Betty Style
All code must follow the Betty style guide:
```bash
betty-style.pl *.c
betty-doc.pl *.c
```

## Getting Started

1. Clone this repository:
```bash
git clone https://github.com/salmaneben/alx-low_level_programming.git
```

2. Navigate to a specific project:
```bash
cd alx-low_level_programming/0x00-hello_world
```

3. Compile and run:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c -o hello
./hello
```

## File Structure

```
alx-low_level_programming/
├── 0x00-hello_world/
│   ├── README.md
│   ├── 0-preprocessor
│   ├── 1-compiler
│   ├── 4-puts.c
│   └── ...
├── 0x01-variables_if_else_while/
│   ├── README.md
│   ├── 0-positive_or_negative.c
│   └── ...
├── 0x02-functions_nested_loops/
│   ├── README.md
│   ├── main.h
│   └── ...
└── ...
```

## Best Practices

- Always initialize your variables
- Check for memory leaks with valgrind
- Follow the Betty coding style
- Write clean, readable code
- Comment your functions properly
- Test your code thoroughly
- Handle edge cases

## Tools Used

- **gcc**: GNU Compiler Collection
- **valgrind**: Memory debugging tool
- **gdb**: GNU Debugger
- **betty**: ALX style checker
- **vim/emacs**: Text editors

## Author

**Salmane Ben**
- GitHub: [@salmaneben](https://github.com/salmaneben)

## Acknowledgments

- ALX School for providing the curriculum and projects
- Holberton School for the original project ideas
- The C programming community for documentation and best practices

---

*This repository is part of the ALX Software Engineering program curriculum.*
