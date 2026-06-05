NAME = ft_display_file
CC = cc
CFLAGS = -Werror -Wextra -Wall
SRC = ft_display_file.c
OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
