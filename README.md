# libft
<p align="center">
  <img src="https://game.42sp.org.br/static/assets/achievements/libftm.png" alt="Achievement Image"><br>
    <b>Grade: 125/100</b>
</p>

## Overview

The `libft` project at 42 school is a fundamental endeavor where students develop a custom C library. This library mirrors the functionality of standard C library functions, providing a versatile toolkit for use in future 42 projects. The implementation includes a diverse set of functions covering string manipulation, memory allocation, and character testing. Notably, all bonus functions have been successfully incorporated, enhancing the library's utility and completeness.

## Table of Contents

- [Getting Started](#getting-started)
- [Usage](#usage)
- [Project Structure](#project-structure)
- [Documentation](#documentation)

## Getting Started

To get started with the `libft` project, follow these steps:

1. Clone the repository to your local machine:

    ```bash
    git clone https://github.com/brmoretti/42_libft.git
    ```

2. Navigate to the project directory:

    ```bash
    cd libft
    ```

3. Build the library:

    ```bash
    make
    ```
    Alternatively if you want build including bonus functions:
    ```bash
    make bonus
    ```

## Usage

After building the library, you can link it to your projects and use the `libft.a` file generated in the `./42_libft` directory.

```c
#include "libft.h"

int main() {
    ft_putstr("Hello, libft!\n");
    return 0;
}
```

## Project Structure

The project is organized into individual source files, each containing the implementation of a specific function. The `include` folder contains the project header file (`libft.h`) that declares the function prototypes.

The `src` folder contains the source files for each function, and the `build` folder (not included in the repository) is used to store object files during compilation.

## Documentation

Each function in the library is thoroughly documented using Doxygen-style comments. The documentation includes a brief description of the function, information about parameters and return values, and additional details where necessary.

