NAME	=	libft.a
DYNAMIC	=	$(NAME:.a=.so)

SRC		=	ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c

OBJ		=	$(SRC:.c=.o)

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -ofast

all: $(NAME)

so: $(DYNAMIC)

.c.o:
	@echo "\e[1;33mCompiling\e[0m $<"
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@echo "\e[1;32mLinking\e[0m $@"
	ar rcs $(NAME) $(OBJ)

$(DYNAMIC): $(OBJ)
	@echo "\e[1;32mLinking\e[0m $@"
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	$(CC) -nostartfiles -shared -o libft.so $(OBJ)

clean:
	@echo "\e[1;31mCleaning\e[0m"
	rm -f $(OBJ) fast

fclean: clean
	rm -f $(NAME)
	rm -f $(DYNAMIC)

re: fclean all

run: all
	@echo "\e[1;34mRunning\e[0m"
	$(CC) main.c -L. -lft -o out
	./out

.PHONY:	all so clean fclean re
.SILENT:
