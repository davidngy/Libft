*This project has been created as part of the 42 curriculum by davinguy.*

# Libft

## Description

Libft is a C library developed as part of the 42 curriculum.

The goal of this project was to gain a deeper understanding of C programming by reimplementing functions from the standard C library and developing additional utility functions.

Instead of relying entirely on existing libraries, this project explores how fundamental operations such as memory manipulation, string handling, and dynamic memory allocation work internally.

Additionally, linked list functions were implemented to understand how dynamic data structures work and how they can be manipulated using pointers.

The result is a static library (`libft.a`) that can be reused in future C projects.

## Library Overview

The library is divided into three parts, each focusing on different aspects of C programming.

### Part 1 — Libc Functions

Reimplementations of standard C library functions, organized by purpose:

- **Character validation:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- **Character conversion:** `ft_toupper`, `ft_tolower`
- **String manipulation:** `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strlcpy`, `ft_strlcat`, `ft_strnstr`, `ft_strdup`
- **Memory operations:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- **Conversion:** `ft_atoi`

These functions cover fundamental operations when working with characters, strings, and memory in C.

Memory functions such as `ft_memcpy` and `ft_memmove` operate directly on memory rather than relying on null-terminated strings. Unlike `ft_memcpy`, `ft_memmove` also supports overlapping memory regions.

String functions allow searching, comparing, copying, and concatenating strings, while character functions provide basic character classification and conversion.

### Part 2 — Additional Functions

Additional functions for common programming tasks:

- **String creation and manipulation:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`
- **String iteration:** `ft_strmapi`, `ft_striteri`
- **File descriptor output:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

These functions extend the functionality of the standard C library by providing useful utilities for string processing and output.

Several functions, such as `ft_split` and `ft_strjoin`, dynamically allocate memory to create new strings or arrays of strings.

The iteration functions demonstrate how function pointers can be used to apply custom operations to characters in a string.

The file descriptor functions allow writing characters, strings, and numbers to a specified output destination using the `write` system call.

### Part 3 — Linked Lists

Functions for creating and manipulating singly linked lists:

- **Node creation:** `ft_lstnew`
- **Adding nodes:** `ft_lstadd_front`, `ft_lstadd_back`
- **List navigation:** `ft_lstsize`, `ft_lstlast`
- **Memory management:** `ft_lstdelone`, `ft_lstclear`
- **List iteration and transformation:** `ft_lstiter`, `ft_lstmap`

A singly linked list consists of nodes, where each node stores a pointer to its content and a pointer to the next node.

Unlike arrays, linked lists do not require their nodes to be stored in consecutive memory locations.

These functions provide operations for adding, traversing, modifying, and deleting nodes. They also introduce important concepts such as structures, dynamic memory allocation, pointer manipulation, and memory management.

## Instructions

### Compilation

Run the following command in the project directory:

```bash
make
```

This compiles the source files into object files and creates `libft.a`, a static library containing the compiled functions.

The Makefile uses `cc` with the following compilation flags:

```bash
-Wall -Wextra -Werror
```

Available Makefile commands:

| Command | Description |
|---|---|
| `make` | Compile the library |
| `make clean` | Remove object files |
| `make fclean` | Remove object files and the library |
| `make re` | Rebuild the library from scratch |

### Usage

Include `libft.h` in your C program to access the function declarations.

For example:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = "Hello, 42!";

    printf("Length: %zu\n", ft_strlen(str));
    return (0);
}
```

Compile your program and link it with `libft.a`:

```bash
cc main.c libft.a -o my_program
```

Run the executable:

```bash
./my_program
```

Expected output:

```text
Length: 10
```

The compiled library can be linked with other C programs without recompiling every individual library source file.

## Resources

The following resources were used to understand C library behavior, memory management, coding standards, and compilation:

- **Libft Subject (42)** — Official project specifications, requirements, and function descriptions.
- **The Norm (42)** — Coding standards and formatting requirements for C projects.
- **[Linux Manual Pages](https://man7.org/linux/man-pages/)** — Understanding standard C functions, their parameters, return values, and expected behavior.
- **[GNU Make Documentation](https://www.gnu.org/software/make/manual/make.html)** — Understanding Makefiles, dependencies, compilation rules, and build automation.
- **[GNU Binutils Documentation](https://sourceware.org/binutils/docs/binutils/)** — Understanding static libraries, object files, and the `ar` command.

### AI Usage

ChatGPT was used as a learning and mentoring tool throughout the project.

It was mainly used for researching programming concepts, asking questions, and improving my understanding of C programming.

In particular, AI helped me understand topics such as pointers, memory manipulation, string handling, function behavior, and edge cases. It was also used to discuss Makefiles, compilation, linking, and static libraries.

AI was additionally used to help structure, review, and improve the grammar of this README.

The purpose of using AI was to support my learning process and develop a better understanding of the concepts behind the implementation.