# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmarquar <lmarquar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/23 16:23:24 by lmarquar          #+#    #+#              #
#    Updated: 2022/09/23 16:23:25 by lmarquar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:= g++
CFLAGS	:= -Wall -Werror -Wextra -std=c++98
SRC		:= Phonebook.cpp main.cpp
NAME	:= phonebook

all: $(NAME)

re: fclean all

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)
