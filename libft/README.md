*This project has been created as part of the 42 curriculum by eboualla.*

---
# Libft
---
## Description

Libft is a custom C standard library implementation created as part of the 42 school curriculum.  
The goal of this project is to understand how standard library functions work internally by reimplementing them from scratch.

The library includes functions for:

- String manipulation
- Memory handling
- Character classification
- Conversions
- Utility functions
- Linked list operations

By building Libft, the focus is on learning low-level C concepts such as pointer arithmetic, memory allocation, and safe data handling.

---

## Instructions

### Compilation

To compile the library, run:

```bash

make        # builds the library
make clean  # removes object files
make fclean # removes object files and the library
make re     # fully rebuilds the project

```
---

## Resources

Linux Man Pages: Used to verify the exact behavior and edge cases of original libc functions.

For UB questions: https://github.com/leske42/Foundations/blob/main/UB/README.md

### AI Usage

ChatGPT was used as a learning assistant during the development of this project for:

understanding edge cases in functions such as ft_split, ft_itoa, and ft_strlcat
clarifying undefined behavior in C (e.g. integer overflow, malloc(0))

All code was written and tested manually. AI was used only for explanations, debugging help, and conceptual understanding.
