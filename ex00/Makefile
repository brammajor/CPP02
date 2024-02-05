# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/12 14:57:20 by brmajor           #+#    #+#              #
#    Updated: 2023/12/12 14:58:36 by brmajor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Fixed.cpp

CC = c++ -Wall -Wextra -Werror -std=c++98

NAME = Fixed

all: $(NAME)

$(NAME): $(SRC) Fixed.hpp
	$(CC) $(SRC) -o $(NAME)
	
clean:
	@echo "Nothing to clean"

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re