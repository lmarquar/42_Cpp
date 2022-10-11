CC		:= c++
CFLAGS	:= -Wall -Werror -Wextra -std=c++98
SRC		:= ClapTrap.cpp main.cpp
NAME	:= a.out

all: $(NAME)

re: fclean all

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)
	rm -rfd $(NAME).dSYM
