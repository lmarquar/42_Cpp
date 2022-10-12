CC			:= g++
CFLAGS		:= -Wall -Werror -Wextra -std=c++98 -g
SRC			:= Bureaucrat.cpp Form.cpp main.cpp
NAME		:= a.out

all: $(NAME)

re: fclean all

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)
	rm -rfd $(NAME).dSYM
