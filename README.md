*This project has been created as part of the 42 curriculum by juho.*

# libft

## Description

This project focuses on recreating a large part of the standard C library in our own custom implementation. The aim is to understand how commonly used functions behave internally and to consolidate them into one reusable library that can be used in future 42 projects.

By rebuilding functions related to memory, strings, character checks, conversions, and list handling, we gain a clearer understanding of low-level programming in C, especially regarding pointers, allocation, and safe memory management.

## Instructions

To build the library, run the following command in the project root:

```bash
make
```

You can then create your own `main.c` file and include the header `libft.h` before compiling it with:

```bash
cc -Wall -Wextra -Werror main.c libft.a
```

Other useful commands:

```bash
make clean
make fclean
make re
```

- `make clean` removes all object files
- `make fclean` removes object files and the compiled library
- `make re` recompiles the library from scratch

## Resources

The behavior of each function was based on the C manual, as well as research from sources such as Stack Overflow, Medium, and GeeksforGeeks.

The following article was especially useful for understanding `memmove` and how to safely copy memory without losing data:

https://marmota.medium.com/c-language-making-memmove-def8792bb8d5

Additionally, the following website was immensely helpful for understanding how 'Makefile' works

https://makefiletutorial.com/#getting-started

And also https://pythontutor.com/visualize.html#mode=edit in helping me visualize mostly recursion, memory and pointers

Other resources are credit to my fellow peers for helping me understand and learn new concepts 💌

### AI usage

AI was used as a guide for:
- understanding edge cases and return values
- checking memory handling and pointer logic
- reviewing small implementation details
- reinforcing concepts such as function pointers, type casting, and index-based iteration

It was used to support learning and verification, not to provide complete final answers.

## Library

### Part 1 - Libc functions

- `ft_isalpha` - checks whether a character belongs to the alphabet
- `ft_isdigit` - checks whether a character is a digit
- `ft_isalnum` - checks whether a character is alphabetical or numeric
- `ft_isascii` - checks whether a character is in the ASCII table
- `ft_isprint` - checks whether a character is printable
- `ft_strlen` - calculates the length of a string
- `ft_memset` - fills a memory block with a constant byte value
- `ft_bzero` - fills a memory block with zeros
- `ft_memcpy` - copies memory from source to destination
- `ft_memmove` - copies memory safely even when source and destination overlap
- `ft_strlcpy` - copies a string into a destination buffer with a bounded size
- `ft_strlcat` - appends a string to a destination buffer within a given size
- `ft_toupper` - converts a character to uppercase
- `ft_tolower` - converts a character to lowercase
- `ft_strchr` - finds the first occurrence of a character in a string
- `ft_strrchr` - finds the last occurrence of a character in a string
- `ft_strncmp` - compares two strings up to `n` bytes
- `ft_memchr` - finds the first occurrence of a byte in a memory block
- `ft_memcmp` - compares two memory blocks up to `n` bytes
- `ft_strnstr` - searches for a substring in a string up to a given length
- `ft_atoi` - converts a string to an integer
- `ft_calloc` - allocates memory and initializes it to zero
- `ft_strdup` - duplicates a string into newly allocated memory

### Part 2 - Additional functions

- `ft_substr` - creates a substring from a larger string
- `ft_strjoin` - concatenates two strings into a new allocated string
- `ft_strtrim` - removes specified characters from the beginning and end of a string
- `ft_split` - splits a string into an array of substrings using a delimiter
- `ft_itoa` - converts an integer to its string representation
- `ft_strmapi` - applies a function to each character of a string and stores the result in a new string
- `ft_striteri` - applies a function to each character in place with its index
- `ft_putchar_fd` - writes a character to a file descriptor
- `ft_putstr_fd` - writes a string to a file descriptor
- `ft_putendl_fd` - writes a string followed by a newline to a file descriptor
- `ft_putnbr_fd` - writes an integer as text to a file descriptor

### Part 3 - Linked list functions

- `ft_lstnew` - creates a new list node
- `ft_lstadd_front` - adds a node to the front of the list
- `ft_lstsize` - counts the number of nodes in a list
- `ft_lstlast` - returns the last node in the list
- `ft_lstadd_back` - adds a node to the end of the list
- `ft_lstdelone` - deletes a single node and frees its content
- `ft_lstclear` - clears the whole list and frees all nodes
- `ft_lstiter` - applies a function to each node in the list
- `ft_lstmap` - creates a new list by applying a function to each node

## Summary

`libft` is a personal C library that reproduces a significant set of common libc functions, helping us become more comfortable with the underlying mechanics of C programming. It strengthens our understanding of string handling, memory safety, allocation, and modular code design, while creating a reusable base for future 42 projects.
