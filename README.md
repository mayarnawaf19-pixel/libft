*This activity has been created as part of the 42 curriculum by Mayar bani-hamad.*

# Libft

## Description

Libft is a custom C library developed as part of the 42 Core Curriculum.

The goal of this project is to recreate a set of functions from the C standard library and implement additional utility functions without relying on their original implementations.

The project also includes functions for manipulating linked lists. Through this project, the library provides reusable functions for character handling, string manipulation, memory management, conversions, file descriptor output, and linked-list operations.

This project also develops a deeper understanding of C programming concepts such as pointers, memory allocation, function pointers, generic pointers (`void *`), and data structures.

## Library Description

The library is divided into three main parts: Libc functions, additional functions, and linked-list functions.

### Part 1 — Libc Functions

This part recreates commonly used functions from the C standard library.

#### Character Functions

These functions are used to check or convert individual characters.

* `ft_isalpha` — checks whether a character is alphabetic.
* `ft_isdigit` — checks whether a character is a digit.
* `ft_isalnum` — checks whether a character is alphanumeric.
* `ft_isascii` — checks whether a value belongs to the ASCII character set.
* `ft_isprint` — checks whether a character is printable.
* `ft_toupper` — converts a lowercase letter to uppercase.
* `ft_tolower` — converts an uppercase letter to lowercase.

#### String Functions

These functions are used to measure, search, compare, copy, and duplicate C strings.

* `ft_strlen` — calculates the length of a string.
* `ft_strlcpy` — copies a string into a destination buffer with size control.
* `ft_strlcat` — appends a string to another string with size control.
* `ft_strchr` — searches for the first occurrence of a character.
* `ft_strrchr` — searches for the last occurrence of a character.
* `ft_strncmp` — compares two strings up to a specified number of characters.
* `ft_strnstr` — searches for a substring within a string.
* `ft_strdup` — creates a dynamically allocated duplicate of a string.
* `ft_atoi` — converts a string representation of an integer into an `int`.

#### Memory Functions

These functions operate directly on blocks of memory.

* `ft_memset` — fills a block of memory with a specified byte.
* `ft_bzero` — sets a block of memory to zero.
* `ft_memcpy` — copies a block of memory from one location to another.
* `ft_memmove` — copies a block of memory while handling overlapping areas.
* `ft_memchr` — searches for a byte within a block of memory.
* `ft_memcmp` — compares two blocks of memory.
* `ft_calloc` — allocates memory and initializes it to zero.

### Part 2 — Additional Functions

The second part extends the library with additional functions for string manipulation, conversions, function callbacks, and file descriptor output.

#### String Manipulation

* `ft_substr` — creates a substring from a given string.
* `ft_strjoin` — joins two strings into a newly allocated string.
* `ft_strtrim` — removes specified characters from the beginning and end of a string.
* `ft_split` — splits a string into an array of strings using a delimiter.
* `ft_itoa` — converts an integer into a string.

#### Function-Based String Operations

* `ft_strmapi` — creates a new string by applying a function to each character.
* `ft_striteri` — applies a function to each character of a string.

These functions use function pointers to allow another function to be passed as an argument.

#### File Descriptor Functions

These functions write different types of data to a specified file descriptor.

* `ft_putchar_fd` — writes a character to a file descriptor.
* `ft_putstr_fd` — writes a string to a file descriptor.
* `ft_putendl_fd` — writes a string followed by a newline to a file descriptor.
* `ft_putnbr_fd` — writes an integer to a file descriptor.

### Part 3 — Linked Lists

The bonus part implements functions for creating and manipulating singly linked lists.

Each node is represented by the following structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list    *next;
}   t_list;
```

The `content` member is a generic pointer, allowing a node to store different types of data. The `next` member points to the next node in the list.

The linked-list functions are:

* `ft_lstnew` — creates a new linked-list node.
* `ft_lstadd_front` — adds a node to the beginning of a list.
* `ft_lstsize` — counts the number of nodes in a list.
* `ft_lstlast` — returns the last node of a list.
* `ft_lstadd_back` — adds a node to the end of a list.
* `ft_lstdelone` — deletes one node and applies a deletion function to its content.
* `ft_lstclear` — deletes all nodes in a list.
* `ft_lstiter` — applies a function to the content of every node.
* `ft_lstmap` — creates a new list by applying a function to the content of each node.

## Instructions

### Compilation

The project includes a `Makefile` used to compile the source files and create the static library.

To compile the library, run:

```bash
make
```

This compiles the source files into object files and creates:

```text
libft.a
```

### Makefile Commands

The Makefile provides the following commands:

```bash
make
```

Compiles the project and creates the `libft.a` library.

```bash
make clean
```

Removes the object files (`.o`).

```bash
make fclean
```

Removes the object files and the `libft.a` library.

```bash
make re
```

Removes the previous compilation files and rebuilds the library.

### Using the Library

To use the library in another C program, include the header file:

```c
#include "libft.h"
```

After building the library with `make`, it can be linked with a C program.

For example:

```bash
cc main.c libft.a -o libft.a
```

Then the compiled program can be executed with:

```bash
./libft.a
```

## Resources

### References

The following resources were used to understand the concepts required for this project:

* **Pointers in C / C++ — Full Course** — YouTube. Used to understand pointers and memory concepts.
* **Makefiles Make Your Life Easier** — YouTube. Used to understand Makefiles and the compilation workflow.
* **Linked List Implementation in C/C++** — YouTube. Used to understand linked lists and their implementation.
* **C Function Pointers — W3Schools.** Used to understand function pointers and callbacks.
* Additional online resources and documentation were used when needed to clarify C programming concepts.

### AI Usage

AI was used as a complementary learning and discussion tool during the project.

It was mainly used to:

* Discuss and clarify C programming concepts encountered during the project.
* Understand the internal behavior and logic of the required functions.
* Discuss how pointers, generic pointers (`void *`), function pointers, memory management, and linked lists work in practice.
* Understand the workflow of the project, including the relationship between source files, header files, the Makefile, compilation, object files, and the final library.
* Clarify implementation difficulties and discuss concepts that were not fully clear.

The main learning resources for the project were external tutorials and documentation, particularly YouTube resources. AI was used as a complementary tool for discussion, clarification, and deeper understanding rather than as the primary learning resource or as a replacement for the implementation work.

## Author

Mayar bani-hamad
