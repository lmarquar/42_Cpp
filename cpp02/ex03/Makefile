CC		:= g++
CFLAGS	:= -Wall -Werror -Wextra -std=c++98 -g
SRC		:= Fixed.cpp Point.cpp main.cpp
NAME	:= a.out

all: $(NAME)

re: fclean all

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)
