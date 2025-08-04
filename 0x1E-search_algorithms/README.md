# 0x1E. C - Search Algorithms

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- What is a search algorithm
- What is a linear search
- What is a binary search
- What is the best search algorithm to use depending on your needs

## Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- You are allowed to use the standard library
- In the following examples, the `main` files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own `main` files at compilation. Our `main` files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called `search_algos.h`
- Don't forget to push your header file
- All your header files should be include guarded

## More Info

You will be asked to write files containing big O notations. Please use this format:
- `O(1)`
- `O(n)`
- `O(n!)`
- `n*m` -> `O(nm)`
- `n square` -> `O(n^2)`
- `sqrt n` -> `O(sqrt(n))`
- `log(n)` -> `O(log(n))`
- `n * log(n)` -> `O(nlog(n))`

## Tasks

### 0. Linear search
**Files: `0-linear.c`, `0-O`**

Write a function that searches for a value in an array of integers using the [Linear search algorithm](https://en.wikipedia.org/wiki/Linear_search)
- Prototype: `int linear_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in `array`
- And `value` is the value to search for
- Your function must return the first index where `value` is located
- If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
- Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)

Write in the file `0-O`, the time complexity (worst case) of the Linear search algorithm.

### 1. Binary search
**Files: `1-binary.c`, `1-O`**

Write a function that searches for a value in a sorted array of integers using the [Binary search algorithm](https://en.wikipedia.org/wiki/Binary_search_algorithm)
- Prototype: `int binary_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in `array`
- And `value` is the value to search for
- Your function must return the index where `value` is located
- You can assume that `array` will be sorted in ascending order
- You can assume that `value` won't appear more than once in `array`
- If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
- You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray) (See example)

Write in the file `1-O`, the time complexity (worst case) of the Binary search algorithm.

### 2. Big O #0
**File: `2-O`**

What is the `time complexity` (worst case) of a linear search in an array of size `n`?

### 3. Big O #1
**File: `3-O`**

What is the `space complexity` (worst case) of an iterative linear search algorithm in an array of size `n`?

### 4. Big O #2
**File: `4-O`**

What is the `time complexity` (worst case) of a binary search in an array of size `n`?

### 5. Big O #3
**File: `5-O`**

What is the `space complexity` (worst case) of a binary search in an array of size `n`?

### 6. Big O #4
**File: `6-O`**

What is the space complexity of this function / algorithm?
```c
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

### 100. Jump search
**Files: `100-jump.c`, `100-O`**

Write a function that searches for a value in a sorted array of integers using the [Jump search algorithm](https://en.wikipedia.org/wiki/Jump_search)
- Prototype: `int jump_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in `array`
- And `value` is the value to search for
- Your function must return the first index where `value` is located
- You can assume that `array` will be sorted in ascending order
- If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
- You have to use the square root of the size of the array as the jump step.
- You can use the `sqrt()` function included in `<math.h>` (don't forget to compile with -lm)
- Every time you compare a value in the array to the value you are searching for, you have to print this value (see example)

Write in the file `100-O`, the time complexity (worst case) of the Jump search algorithm.

### 101. Interpolation search
**Files: `101-interpolation.c`, `101-O`**

Write a function that searches for a value in a sorted array of integers using the [Interpolation search algorithm](https://en.wikipedia.org/wiki/Interpolation_search)
- Prototype: `int interpolation_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in `array`
- And `value` is the value to search for
- Your function must return the first index where `value` is located
- You can assume that `array` will be sorted in ascending order
- If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
- To determine the probe position, you can use : `pos = lo + (((double)(value - array[lo]) / (array[hi] - array[lo])) * (hi - lo))`
- Every time you compare a value in the array to the value you are searching for, you have to print this value (see example)

Write in the file `101-O`, the time complexity (worst case) of the Interpolation search algorithm.

### 102. Exponential search
**Files: `102-exponential.c`, `102-O`**

Write a function that searches for a value in a sorted array of integers using the [Exponential search algorithm](https://en.wikipedia.org/wiki/Exponential_search)
- Prototype: `int exponential_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in `array`
- And `value` is the value to search for
- Your function must return the first index where `value` is located
- You can assume that `array` will be sorted in ascending order
- If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
- You have to use powers of 2 as exponential ranges to search in your array
- Every time you compare a value in the array to the value you are searching for, you have to print this value (See example)
- Once you've found the good range, you need to use a binary search:
  - Every time you split the array, you have to print the new array (or subarray) you're searching in (See example)

Write in the file `102-O`, the time complexity (worst case) of the Exponential search algorithm.

### 103. Advanced binary search
**Files: `103-exponential.c`, `103-O`**

You may have noticed that the basic binary search does not necessarily return the index of the first value in the array (if this value appears more than once in the array). In this exercise, you'll have to solve this problem.

Write a function that searches for a value in a sorted array of integers.
- Prototype: `int advanced_binary(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in `array`
- And `value` is the value to search for
- Your function must return the index where `value` is located
- You can assume that `array` will be sorted in ascending order
- If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
- Every time you split the array, you have to print the new array (or subarray) you're searching in (See example)
- You have to use recursion. You may only use one loop (`while`, `for`, `do while`, etc.) in order to print the array

Write in the file `103-O`, the time complexity (worst case) of the Advanced Binary search algorithm.

### 104. Jump search in a singly linked list
**Files: `104-advanced_binary.c`, `104-O`**

Write a function that searches for a value in a sorted list of integers using the Jump search algorithm.
- Prototype: `listint_t *jump_list(listint_t *list, size_t size, int value);`
- Where `list` is a pointer to the head of the list to search in
- `size` is the number of nodes in `list`
- And `value` is the value to search for
- Your function must return a pointer to the first node where `value` is located
- You can assume that `list` will be sorted in ascending order
- If `value` is not present in `head` or if `head` is `NULL`, your function must return `NULL`
- You have to use the square root of the size of the list as the jump step.
- You can use the `sqrt()` function included in `<math.h>` (don't forget to compile with -lm)
- Every time you compare a value in the list to the value you are searching for, you have to print this value (see example)

Please use this data structure:
```c
/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;
```

Write in the file `104-O`, the time complexity (average case) of the Jump search algorithm in a singly linked list of size `n`, using `step = sqrt(n)`.

### 105. Linear search in a skip list
**Files: `105-jump_list.c`, `105-O`**

Write a function that searches for a value in a sorted skip list of integers.
- Prototype: `skiplist_t *linear_skip(skiplist_t *list, int value);`
- Where `list` is a pointer to the head of the skip list to search in
- A node of the express lane is placed every index which is a multiple of the square root of the size of the list
- And `value` is the value to search for
- You can assume that `list` will be sorted in ascending order
- Your function must return a pointer on the first node where `value` is located
- If `value` is not present in `list` or if `head` is `NULL`, your function must return `NULL`
- Every time you compare a value in the list to the value you are searching for, you have to print this value (see example)

Please use this data structure:
```c
/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 * for Holberton project
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;
```

Write in the file `105-O`, the time complexity (average case) of the Linear search in a skip list of size `n`, with an express lane using `step = sqrt(n)`.
