NAME    = a
CC      = cc
CFLAGS  = -Wall -Wextra -Werror # -lbsd -fsanitize=address -g3

SRCS    = $(wildcard *.c)
HEADER  = libft.h

all: $(NAME)

$(NAME): $(SRCS)  $(HEADER) 
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re