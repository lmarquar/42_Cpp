CC		:= g++
CFLAGS	:= -Wall -Werror -Wextra -std=c++98
SRC		:= main.cpp Harl.cpp
NAME	:= harlFilter

all: $(NAME)

re: fclean all

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)