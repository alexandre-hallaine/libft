# libft - Your Foundation for C

**libft** is a custom C library meticulously crafted to empower your C programming endeavors. It serves as a robust foundation, providing re-implementations of standard C library functions alongside a collection of supplementary utility functions.

## Function Categories

|Memory Functions|String Functions|Character Functions|Integer/Conversion Functions|Output Functions|
|:---|:---|:---|:---|:---|
|`ft_memset`|`ft_strlen`|`ft_isalpha`|`ft_atoi`|`ft_putchar_fd`|
|`ft_bzero`|`ft_strchr`|`ft_isdigit`|`ft_itoa`|`ft_putstr_fd`|
|`ft_memcpy`|`ft_strjoin`|`ft_isalnum`| |`ft_putendl_fd`|
|`ft_memccpy`|`ft_split`|`ft_isascii`| |`ft_putnbr_fd`|
|`ft_memmove`|`ft_strlcpy`|`ft_isprint`| | |
|`ft_memchr`|`ft_strlcat`|`ft_toupper`| | |
|`ft_memcmp`|`ft_strnstr`|`ft_tolower`| | |
|`ft_calloc`|`ft_strncmp`| | | |
| |`ft_strdup`| | | |
| |`ft_substr`| | | |
| |`ft_strtrim`| | | |
| |`ft_strmapi`| | | |
| |`ft_striteri`| | | |

## Building and Using libft

1.  **Build with Meson:**
    ```bash
    meson setup build
    meson compile -C build
    ```

2.  **Install (Optional):**
    ```bash
    sudo meson install -C build
    ```

3.  **Link the Library:**
    In your C projects, add `-L /path/to/libft -lft` to your compiler flags.

## Example Usage

```c
#include "ft.h"
#include <stdio.h>

int main() {
    char *original = " This is a sample string.  ";
    char *trimmed = ft_strtrim(original, " ");

    printf("Original: '%s'\n", original);
    printf("Trimmed: '%s'\n", trimmed);

    free(trimmed); // Free memory allocated by ft_strtrim

    return 0;
}
```

## License

This project is licensed under the MIT License.
