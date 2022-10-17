CC			:= c++
CFLAGS		:= -Wall -Werror -Wextra -std=c++98 -g
SRC			:= main.cpp
NAME		:= convert

all: $(NAME)

re: fclean all

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:

fclean: clean
	rm -rfd $(NAME).dSYM
	rm -f $(NAME)

LAST := 127
NUMBERS := $(shell seq 0 ${LAST})
JOBS := $(addprefix job,${NUMBERS})
.PHONY: all ${JOBS}
numbers: ${JOBS} ; echo "$@ success"
${JOBS}: job%: ; ./$(NAME) $*
