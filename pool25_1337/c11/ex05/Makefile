NAME= do-op
CC= cc
CFLAGS= -Wall -Wextra -Werror
SRC= do-op.c ft_atoi.c ft_putnbr.c
OBJ= $(SRC:.c=.o)

all: $(NAME)

%.o:%.c ft.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
