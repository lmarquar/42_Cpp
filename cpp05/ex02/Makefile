CC			:= c++
CFLAGS		:= -Wall -Werror -Wextra -std=c++98
SRC			:= Bureaucrat.cpp Form.cpp main.cpp
NAME		:= a.out

all: $(NAME)

re: fclean all

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean:
	rm -rfd $(NAME).dSYM
