CC			:= c++
CFLAGS		:= -Wall -Werror -Wextra -std=c++98
SRC			:= Bureaucrat.cpp main.cpp
NAME		:= a.out

all: $(NAME)

re: fclean all

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:

fclean: clean
	rm -rfd $(NAME).dSYM
	rm -f $(NAME)
