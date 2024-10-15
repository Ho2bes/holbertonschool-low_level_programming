# malloc_free Project

This repository contains the solutions for the **malloc_free** project at Holberton School. The project focuses on dynamic memory allocation in C using the `malloc`, `free`, `calloc`, and `realloc` functions.

## 📝 Project Overview

Memory management is an essential aspect of programming in C, and this project covers how to dynamically allocate, reallocate, and free memory during runtime. These functions allow programs to manage memory more efficiently, especially when the size of data is unknown at compile time.

### Key Concepts:
- **malloc**: Allocates a block of memory dynamically.
- **free**: Deallocates previously allocated memory.
- **calloc**: Allocates memory for an array and initializes all bytes to zero.
- **realloc**: Resizes a previously allocated memory block.

### Skills Gained:
- Understanding dynamic memory management in C.
- Using pointers to manipulate dynamically allocated memory.
- Learning the importance of releasing memory with `free` to avoid memory leaks.

## 📂 Project Structure

- **0-create_array.c**: A function that creates an array of characters and initializes it with a specific character.
- **1-strdup.c**: A function that returns a pointer to a newly allocated space in memory, which contains a copy of the given string.
- **2-str_concat.c**: A function that concatenates two strings dynamically.
- **3-alloc_grid.c**: A function that returns a pointer to a 2-dimensional array of integers.
- **4-free_grid.c**: A function that frees a 2-dimensional grid previously created by `alloc_grid`.
- **100-argstostr.c**: A function that concatenates all the arguments of a program into a single string.
- **101-strtow.c**: A function that splits a string into words and returns them as an array of strings.
