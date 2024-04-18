NAME	:= libft.a
CFLAGS	:= -Wall -Wextra -Wunreachable-code -Ofast

HEADERS	:= -I ./include
SRCS	:= $(shell find src -type f -name "*.c")
OBJS	:= $(SRCS:src/%.c=obj/%.o)

all: $(NAME)

obj/%.o: src/%.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -o $@ -c $< $(HEADERS) && echo "Compiling: $(notdir $<)"

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS) && echo "Linked: $(NAME)"

clean:
	rm -rf $(OBJS) && echo "Removed: $(OBJS)"

fclean: clean
	rm -rf $(NAME) && echo "Removed: $(NAME)"

re: clean all

.PHONY: all, clean, fclean, re, libmlx, libgnl
.SILENT:
