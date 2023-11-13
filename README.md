# libft (125/100)

## Overview

The `libft` project at 42 school is a fundamental endeavor where students develop a custom C library. This library mirrors the functionality of standard C library functions, providing a versatile toolkit for use in future 42 projects. The implementation includes a diverse set of functions covering string manipulation, memory allocation, and character testing. Notably, all bonus functions have been successfully incorporated, enhancing the library's utility and completeness.

## Table of Contents

- [Getting Started](#getting-started)
- [Usage](#usage)

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
