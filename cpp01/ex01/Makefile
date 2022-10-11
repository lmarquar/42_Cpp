CC		:= g++
CFLAGS	:= -Wall -Werror -Wextra -std=c++98
SRC		:= Zombie.cpp main.cpp
NAME	:= zombies

all: $(NAME)

re: fclean all

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)