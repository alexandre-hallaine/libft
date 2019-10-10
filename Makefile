SRCS	= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c
OBJS	= ${SRCS:.c=.o}
NAME	= libft.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror

.a.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

all: ${NAME}

clean:
	rm ${OBJS}

fclean: clean
	rm ${NAME}

re: fclean all

.PHONY:	all clean fclean re
