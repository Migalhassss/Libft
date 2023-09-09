# libft - 42 School Project

The `libft` library is a fundamental project in the 42 School curriculum, which requires you to reimplement some standard C library functions as well as create additional utility functions.

## Table of Contents

- [About](#about)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Support](#Support)

## About

The `libft` project at 42 School aims to deepen your understanding of C programming and the standard C library functions. It involves writing your versions of common C library functions such as `strlen`, `strlcpy`, `strlcat`, `isdigit`, and more, while also implementing additional utility functions.

## Getting Started

To get started with the `libft` project, follow these steps:

1. Clone this repository to your local machine:

   ```bash
   git clone https://github.com/Migalhassss/Libft.git

2. Navigate to the project directory:

   ```bash
   cd libft

3. Compile the library:

   ```bash
   make
4. You can now use the libft.a library in your other 42 School projects.

## Usage

In your other 42 School projects, include the libft.h header file to access the libft functions. Here's an example of how to use the libft functions in your code:

  ```c
  #include "libft.h"

int main() {
    char *str = "Hello, libft!";
    int len = ft_strlen(str);

    ft_putstr("Length of the string: ");
    ft_putnbr(len);
    ft_putchar('\n');
    return (0);
}
```

## Support 

If you have any questions, encounter issues, or need assistance with the libft project, please feel free to open an issue on GitHub. Im here to help and improve the library together
