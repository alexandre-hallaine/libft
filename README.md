# FortyTwo Library

Empower your 42 school projects with the FortyTwo Library!

## Function Categories

The FortyTwo Library provides functions in two main categories:

* **Essential C Functions:**  Reimagined and improved versions of standard C library functions, with added error handling and enhanced robustness. 
* **Helper Functions:** A collection of utilities designed to simplify common tasks and streamline your development workflow.

<details>
  <summary>Function Table</summary>

|Character|Integer|Memory|Output|String|
|-|-|-|-|-|
|`ft_isalnum`|`ft_atoi`|`ft_bzero`|`ft_putchar_fd`|`ft_split`|
|`ft_isalpha`|`ft_itoa`|`ft_calloc`|`ft_putendl_fd`|`ft_strchr`|
|`ft_isascii`| |`ft_memchr`|`ft_putnbr_fd`|`ft_strdup`|
|`ft_isdigit`| |`ft_memcmp`|`ft_putstr_fd`|`ft_striteri`|
|`ft_isprint`| |`ft_memcpy`| |`ft_strjoin`|
|`ft_tolower`| |`ft_memmove`| |`ft_strlcat`|
|`ft_toupper`| |`ft_memset`| |`ft_strlcpy`|
| | | | |`ft_strlen`|
| | | | |`ft_strmapi`|
| | | | |`ft_strncmp`|
| | | | |`ft_strnstr`|
| | | | |`ft_strrchr`|
| | | | |`ft_strtrim`|
| | | | |`ft_substr`|

_For detailed descriptions and usage examples, please refer to the 42 `libft` subject documentation._
</details>

## Usage

**Prerequisites:**

* A C compiler (e.g., `gcc`, `clang`)
* Meson build system

**Build Instructions:**

1. **Configure Build:**

   ```bash
   meson setup build
   ```

2. **Compile:**

   ```bash
   meson compile -C build
   ```

**Important Note for 42 Students:**

Installing the library is **NOT recommended** as it may conflict with the requirements of 42 projects, which often need to run without external library dependencies. Instead, you can directly link the library to your projects.

**Linking:**

To use the FortyTwo Library in your project, add the following flags to your C compiler command:

```bash
gcc main.c -Lbuild/ -lft 
```

* **`-Lbuild/`:**  This flag tells the compiler to look for the library in the `build` directory (adjust the path if necessary).
* **`-lft`:**  This flag specifies the library to link against (in this case, the FortyTwo library, named `libft`).

## Example

Here's a simple example using the `ft_strlen` function from the FortyTwo Library:

```c
#include "forty_two.h" // Include the library header 
#include <stdio.h>

int main() {
    char *str = "Hello, 42!";
    int length = ft_strlen(str);

    printf("The length of the string is: %d\n", length); 
    return 0;
}
```

## Testing 

We utilize the excellent `libftTester` project developed by Tripouille for rigorous testing of our library. A big thank you to Tripouille for creating this valuable resource for the 42 community!

You can find the `libftTester` project on GitHub: [https://github.com/Tripouille/libftTester](https://github.com/Tripouille/libftTester)

**Important Note:** The `libftTester` is a separate project and is not included with this library. You'll need to download and set it up according to its instructions.

## License

This project is licensed under the MIT License.  See the [LICENSE](LICENSE) file for details.
