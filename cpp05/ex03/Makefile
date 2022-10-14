CC			:= c++
CFLAGS		:= -Wall -Werror -Wextra -std=c++98 -I./Forms/
SRC_DIR_FORM:= Forms/
SRC_FORM	:= Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
SRC			:= Bureaucrat.cpp Intern.cpp main.cpp \
				$(addprefix $(SRC_DIR_FORM), $(SRC_FORM))
NAME		:= a.out

all: $(NAME)

re: fclean all

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean:
	rm -rfd $(NAME).dSYM
	rm -f *_shrubbery
