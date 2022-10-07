CC			:= g++
CFLAGS		:= -Wall -Werror -Wextra -std=c++98 -g
SRC_ANI		:= Animal.cpp Cat.cpp Dog.cpp
SRC_WRONG_A	:= WrongAnimal.cpp WrongCat.cpp
SRC_BRA		:= Brain.cpp
SRC_MAIN	:= main.cpp
SRC_DIR_ANI	:= animal/
SRC_DIR_BRA	:= brain/
SRC_DIR_WRA	:= wronganimal/
SRC			:= $(addprefix $(SRC_DIR_ANI), $(SRC_ANI)) \
				$(addprefix $(SRC_DIR_WRA), $(SRC_WRONG_A)) \
				$(addprefix $(SRC_DIR_BRA), $(SRC_BRA)) $(SRC_MAIN)
NAME		:= a.out

all: $(NAME)

re: fclean all

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)
	rm -rfd $(NAME).dSYM

fclean: clean
