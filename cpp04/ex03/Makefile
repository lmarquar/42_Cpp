CC			:= g++
CFLAGS		:= -Wall -Werror -Wextra -std=c++98 -g
SRC_CHARACT	:= Character.cpp
SRC_MATER	:= AMateria.cpp Cure.cpp Ice.cpp
SRC_MATSRC	:= MateriaSource.cpp
SRC_DIR_CHR	:= Character/
SRC_DIR_MAT	:= Materias/
SRC_DIR_MSRC:= MateriaSource/
SRC			:= $(addprefix $(SRC_DIR_CHR), $(SRC_CHARACT)) \
				$(addprefix $(SRC_DIR_MAT), $(SRC_MATER)) \
				$(addprefix $(SRC_DIR_MSRC), $(SRC_MATSRC)) \
				main.cpp
NAME		:= a.out

all: $(NAME)

re: fclean all

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)
	rm -rfd $(NAME).dSYM
