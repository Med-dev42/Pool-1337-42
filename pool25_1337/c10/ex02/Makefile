NAME = ft_tail
CC = cc
CFLAGS = -Wextra -Werror -Wall
SRC = ft_tail.c
OBJ = $(SRC:.c=.o)

all:$(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
