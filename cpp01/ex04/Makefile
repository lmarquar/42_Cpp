CC		:= g++
CFLAGS	:= -Wall -Werror -Wextra -std=c++98
SRC		:= main.cpp
NAME	:= replace

all: $(NAME)

re: fclean all

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)