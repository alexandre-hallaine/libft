project('FortyTwo', 'c', version: '1.0.0')

src = files(
    'src/character/ft_isalnum.c',
    'src/character/ft_isalpha.c',
    'src/character/ft_isascii.c',
    'src/character/ft_isdigit.c',
    'src/character/ft_isprint.c',
    'src/character/ft_tolower.c',
    'src/character/ft_toupper.c',

    'src/integer/ft_atoi.c',
    'src/integer/ft_itoa.c',

    'src/memory/ft_bzero.c',
    'src/memory/ft_calloc.c',
    'src/memory/ft_memchr.c',
    'src/memory/ft_memcmp.c',
    'src/memory/ft_memcpy.c',
    'src/memory/ft_memmove.c',
    'src/memory/ft_memset.c',

    'src/output/ft_putchar_fd.c',
    'src/output/ft_putendl_fd.c',
    'src/output/ft_putnbr_fd.c',
    'src/output/ft_putstr_fd.c',

    'src/string/ft_split.c',
    'src/string/ft_strchr.c',
    'src/string/ft_strdup.c',
    'src/string/ft_striteri.c',
    'src/string/ft_strjoin.c',
    'src/string/ft_strlcat.c',
    'src/string/ft_strlcpy.c',
    'src/string/ft_strlen.c',
    'src/string/ft_strmapi.c',
    'src/string/ft_strncmp.c',
    'src/string/ft_strnstr.c',
    'src/string/ft_strrchr.c',
    'src/string/ft_strtrim.c',
    'src/string/ft_substr.c',
)

inc = include_directories('include')

lib = library('ft', src,
    include_directories: inc,
    install: true)

dep = declare_dependency(
    include_directories: inc,
    link_with: lib
)

install_headers('include/forty_two.h')
