CC		:= g++
CFLAGS	:= -Wall -Werror -Wextra -std=c++98
SRC		:= Fixed.cpp main.cpp
NAME	:= a.out

all: $(NAME)

re: fclean all

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)