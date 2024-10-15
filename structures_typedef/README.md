# Structures and typedef Project

This repository contains the solutions for the **structures_typedef** project at Holberton School. The project focuses on understanding how to define and use structures in C, and how the `typedef` keyword can simplify code when working with complex data types.

## 📝 Project Overview

In C programming, **structures** are user-defined data types that allow the grouping of different types of variables under one name. This project covers how to define, initialize, and access members of structures. It also introduces the **typedef** keyword, which provides a shorthand for creating new names for existing data types, particularly for structures.

### Key Concepts:
- **Structures**: Defining and using structures to group related variables of different types.
- **Accessing Structure Members**: Using the dot `.` operator to access and modify members of a structure.
- **typedef**: Simplifying complex type declarations by defining aliases for data types.
  
### Skills Gained:
- Defining and manipulating structures in C.
- Understanding how to create flexible data structures using typedef.
- Learning how structures can be used to organize complex data in programs.

## 📂 Project Structure

- **dog.h**: A header file that defines a new type `struct dog` with attributes for a dog's name, age, and owner. It also uses `typedef` to create an alias `dog_t` for `struct dog`.
- **1-init_dog.c**: A function that initializes a variable of type `struct dog`.
- **2-print_dog.c**: A function that prints the details of a `struct dog` variable.
- **4-new_dog.c**: A function that creates a new dog instance dynamically.
- **5-free_dog.c**: A function that frees memory allocated for a `struct dog`.
