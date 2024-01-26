# libft - 42 Paris Project

## Overview

This is the `libft` project, a fundamental project at 42 Paris that serves as the building block for many others. The goal of this project is to create a library of various C functions that can be reused in future projects, providing a solid foundation for your programming endeavors.

## Contents

The `libft` library includes functions categorized into different sections:

- **Libc Functions:** Reimplementations of standard C library functions.
- **Additional Functions:** Custom functions that expand the functionality of the library.

## How to Use

1. Clone the repository.
   ```bash
   git clone <repository_url>
   ```

2. Compile the library.
   ```bash
   make
   ```

3. Include the library in your project.
   ```c
   #include "libft.h"
   ```

4. Link the library during compilation.
   ```bash
   gcc -o your_program your_program.c -L. -lft
   ```

5. Start using the functions in your code.

## Additional Notes

- The `Makefile` provided automates the compilation process.
- The project emphasizes code reusability and follows the 42 norm, a set of rules for coding style and behavior.
