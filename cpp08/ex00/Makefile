CC			:= c++
CFLAGS		:= -Wall -Werror -Wextra -Wconversion -std=c++98
SRC			:= main.cpp
NAME		:= easyfindtest

all: $(NAME)

re: fclean all

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:

fclean: clean
	rm -rfd $(NAME).dSYM
	rm -f $(NAME)

