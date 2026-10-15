NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = $(wildcard ft_*.c)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm $(NAME)

re: fclean
	$(MAKE) all

.PHONY: all clean fclean re
