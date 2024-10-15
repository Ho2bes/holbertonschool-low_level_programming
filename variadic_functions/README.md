# Variadic Functions Project

This repository contains the solutions for the **variadic_functions** project at Holberton School. The project focuses on understanding and implementing variadic functions in C, which allow functions to accept a variable number of arguments.

## 📝 Project Overview

A **variadic function** is a function that can accept an arbitrary number of arguments. In C, the `stdarg.h` library provides the tools necessary to implement such functions. This project explores how to define variadic functions, access the arguments, and apply them in various scenarios.

### Key Concepts:
- **stdarg.h**: A library that provides macros for accessing the arguments of a variadic function.
- **va_list**: A type used to hold information about variable arguments.
- **va_start, va_arg, va_end**: Macros used to initialize, access, and clean up a `va_list`.

### Skills Gained:
- Implementing variadic functions that can take a varying number of arguments.
- Using macros to handle variable arguments in functions.
- Applying variadic functions in real-world scenarios like summing numbers or formatting output.

## 📂 Project Structure

- **0-sum_them_all.c**: A function that returns the sum of all its parameters.
- **1-print_numbers.c**: A function that prints numbers, followed by a new line.
- **2-print_strings.c**: A function that prints strings, followed by a new line.
- **3-print_all.c**: A function that prints anything, depending on the format passed.
