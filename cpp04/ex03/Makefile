CC			:= g++
CFLAGS		:= -Wall -Werror -Wextra -std=c++98 -g
SRC_CHARACT	:= Character.cpp
SRC_MATER	:= AMateria.cpp Cure.cpp Ice.cpp
SRC_DIR_CHR	:= Character/
SRC_DIR_MAT	:= Materias/
SRC			:= $(addprefix $(SRC_DIR_CHR), $(SRC_CHARACT)) \
				$(addprefix $(SRC_DIR_MAT), $(SRC_MATER))
NAME		:= a.out

all: $(NAME)

re: fclean all

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)
	rm -rfd $(NAME).dSYM
