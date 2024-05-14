# libft - Your C Standard Library Reinvented

**libft** is a custom implementation of standard C library functions, designed to provide a solid foundation for C programming projects. This library not only replicates essential functions like string manipulation and memory management but also includes additional utilities to enhance your coding experience.

## Key Features

* **Standard Library Functions:**  Replicates a wide range of standard C functions, providing familiarity and flexibility.
* **Additional Utilities:** Includes extra functions for tasks like string splitting, character conversion, and more.
* **Educational Value:** Ideal for learning how standard library functions are implemented under the hood.
* **Customization:** Easily adaptable to your specific project requirements.

## Function Categories

* **Memory Functions:** `ft_memset`, `ft_memcpy`, `ft_memmove`, etc.
* **String Functions:** `ft_strlen`, `ft_strchr`, `ft_strjoin`, `ft_split`, etc.
* **Character Functions:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, etc.
* **Integer/Conversion Functions:** `ft_atoi`, `ft_itoa`, etc.
* **Output Functions:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, etc.

## How to Build and Use

1. **Clone the Repository:**
   ```bash
   git clone https://your-repository-url/libft.git
   ```

2. **Build with Meson:**
   ```bash
   cd libft
   meson setup builddir
   meson compile -C builddir
   ```

3. **Install (Optional):**
   ```bash
   sudo meson install -C builddir
   ```

4. **Link the Library:**
   In your C projects, add `-L /path/to/libft -lft` to your compiler flags.

## Example Usage

```c
#include "libft.h"
#include <stdio.h> // For printf

int main() {
    char *message = "Welcome to libft!";
    size_t length = ft_strlen(message);

    printf("The message '%s' has %zu characters.\n", message, length);

    return 0;
}
```

## License

This project is licensed under the MIT License.

## Acknowledgements

* Inspired by the standard C library.
* Special thanks to [Meson Build System](https://mesonbuild.com/).
