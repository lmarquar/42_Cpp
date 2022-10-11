# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmarquar <lmarquar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/29 16:14:41 by lmarquar          #+#    #+#              #
#    Updated: 2022/09/29 16:14:41 by lmarquar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:= g++
CFLAGS	:= -Wall -Werror -Wextra -std=c++98
SRC		:= Zombie.cpp main.cpp
NAME	:= zombies

all: $(NAME)

re: fclean all

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)