CC			:= c++
CFLAGS		:= -Wall -Werror -Wextra -std=c++98 -I./Forms/
SRC_DIR_FORM:= Forms/
SRC_FORM	:= Form.cpp
SRC			:= Bureaucrat.cpp main.cpp \
				$(addprefix $(SRC_DIR_FORM), $(SRC_FORM))
NAME		:= a.out

all: $(NAME)

re: fclean all

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)
	rm -rfd $(NAME).dSYM
