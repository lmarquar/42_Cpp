CC		:= g++
CFLAGS	:= -Wall -Werror -Wextra -std=c++98
SRC		:= Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp main.cpp
NAME	:= a.out

all: $(NAME)

re: fclean all

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)
	rm -rfd $(NAME).dSYM
